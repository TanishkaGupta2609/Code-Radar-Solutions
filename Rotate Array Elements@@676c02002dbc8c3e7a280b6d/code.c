#include <stdio.h>
void RotateArray(int arr[],int n,int k){
    int k=k%n;
    int temp[k];
    for(int i=0;i<n;i++){
        temp[i]=arr[n-k-1];
    }
    for(int i=n-1;i>=k;i++){
        arr[i]=arr[i-k];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    RotateArray(arr,n,k);
    return 0;
}