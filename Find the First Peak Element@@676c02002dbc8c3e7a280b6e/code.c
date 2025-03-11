#include <stdio.h>
int mainrray(int arr[],int n){
    for(int i=1;i<n-1;i++){
        if(arr[i+1]<arr[i] && arr[i-1]<arr[i]){
            printf("%d",arr[i]);
        if (arr[i+1]==0){
            printf("%d",arr[i]);
        }
            return 0;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mainrray(arr,n);
    return 0;
}