#include <stdio.h>
void leaderArray(int arr[],int n){
    int index=0;
    int leaders[index];
    int max_right=arr[n-1];
    leaders[index++]=max_right;
    printf("%d ",arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max_right){
            max_right=arr[i];
            int max_right=arr[n-1];
            leaders[index++]=max_right;
            }
    }
    for(int i=index-1;i>=0;i--){
        printf("%d",leaders[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&leaders[i]);
    }
    leaderArray(arr,n);
    return 0;
}