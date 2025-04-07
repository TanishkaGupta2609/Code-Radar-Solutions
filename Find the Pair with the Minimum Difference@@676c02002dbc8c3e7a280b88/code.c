#include <stdio.h>
#include <stdlib.h>
void MinDiffArray(int arr[],int n){
    if(n<2){
        printf("-1");
        return;
    }
    int max_diff=arr[0]-arr[1];
    int num;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        num=abs(arr[i]-arr[i+1]);
        if(num<max_diff){
            max_diff=num;
            printf("%d %d",arr[i],arr[i+1]);
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
    MinDiffArray(arr,n);
    return 0;
}