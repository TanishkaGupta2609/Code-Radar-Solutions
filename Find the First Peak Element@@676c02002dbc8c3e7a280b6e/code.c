#include <stdio.h>
void mainrray(int arr[],int n){
    for(int i=1;i<=n;i++){
        if(arr[i+1]<arr[i] && arr[i-1]<arr[i]){
            return arr[i];
            break;
        }
    }
    if (n==0){
        return -1;
    if (n==1 || arr[1]>arr[0]){
        return arr[1]
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
    int s=mainrray(arr,n);
    printf("%d",mainarray(arr,n));
    return 0;
}