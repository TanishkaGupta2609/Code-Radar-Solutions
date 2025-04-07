#include <stdio.h>
void consecutiveArray(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        else if(arr[i+1]=arr[i]+1){
            count++;
        }
        else if(arr[i]==arr[i+1]){
            count=1;
        }
        else if(arr[i]>arr[i+1] || arr[i]<arr[i+1]){
            count=1;
        }
    }
    printf("%d",count);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    consecutiveArray(arr,n);
}