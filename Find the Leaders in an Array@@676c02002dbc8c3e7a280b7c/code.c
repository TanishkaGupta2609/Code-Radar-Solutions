#include <stdio.h>
void leaderArray(int arr[],int n){
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
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