#include <stdio.h>
int mainrray(int arr[],int n){
    if (n==0 || n==1){
         printf("-1");
    }
    for(i=1;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
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