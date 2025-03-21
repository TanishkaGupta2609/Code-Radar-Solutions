#include <stdio.h>
void leaderArray(int arr[],int n){
    int max_right=arr[n-1];
    printf("%d ",arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max_right){
            printf("%d ",arr[i]);
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