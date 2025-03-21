#include <stdio.h>
void targetArray(int arr[],int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    targetArray(arr,n,k);
    return 0;
}