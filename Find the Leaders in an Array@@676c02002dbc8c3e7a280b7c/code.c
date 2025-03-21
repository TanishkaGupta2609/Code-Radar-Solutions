#include <stdio.h>
void leaderArray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            printf("%d ",arr[i+1]);
        }
    }
    if(arr[n-1]>arr[n-2]){
        printf("%d",arr[n-1]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    leaderArray(arr,n);
    return 0;
}