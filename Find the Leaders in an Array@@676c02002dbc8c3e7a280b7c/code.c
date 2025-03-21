#include <stdio.h>
void leaderArray(int arr[],int n){
    for(int i=arr[n-2];i>n;i--){
        if(arr[i]<arr[i+1]){
            printf("%d ",arr[i+1]);
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
    leaderArray(arr,n);
    return 0;
}