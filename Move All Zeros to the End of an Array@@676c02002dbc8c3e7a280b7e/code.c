#include <stdio.h>
void ZeroArray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            int temp=arr[i];
            arr[i]=arr[n-i];
            arr[n-i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ZeroArray(arr,n);
    return 0;
}