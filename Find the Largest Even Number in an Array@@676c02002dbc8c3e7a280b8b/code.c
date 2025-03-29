#include <stdio.h>
void SortedArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]%2==0){
            if(arr[i]>arr[i+1])
            printf("%d",arr[i+1]);
        }
    }
    printf("-1");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    SortedArray(arr,n);
    return 0;
}