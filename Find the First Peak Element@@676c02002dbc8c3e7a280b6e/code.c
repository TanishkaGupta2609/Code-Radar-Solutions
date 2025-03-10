#include <stdio.h>
int mainrray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            printf("%d",arr[i+1]);
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