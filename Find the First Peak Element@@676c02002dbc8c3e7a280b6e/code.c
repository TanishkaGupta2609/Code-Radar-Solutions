#include <stdio.h>
void mainrray(int arr[],int n){
    for(int i=1;i<=n;i++){
        if(arr[i+1]<arr[i] && arr[i-1]<arr[i]){
            printf("%d",arr[i]);
            break;
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