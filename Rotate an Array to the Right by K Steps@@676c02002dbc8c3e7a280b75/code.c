#include <stdio.h>
void RotateArray(int arr[],int n,int k){
    k=k%n;
    int temp[k];
    for(int i=0;i<k-1;i++){
        temp[i]=arr[n-k+1];
    }
    for(int i=n-1;i>=k;i--){
        arr[i]=arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
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