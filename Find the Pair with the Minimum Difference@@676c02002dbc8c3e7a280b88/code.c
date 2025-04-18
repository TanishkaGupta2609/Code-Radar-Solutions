#include <stdio.h>
#include <stdlib.h>
void MinDiffArray(int arr[],int n){
    if(n<2){
        printf("-1");
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int max_diff=arr[1]-arr[0];
    int num,num1=arr[0],num2=arr[1];
    for(int i=0;i<n-1;i++){
        num=abs(arr[i+1]-arr[i]);
        if(num<max_diff){
            max_diff=num;
            num1=arr[i];
            num2=arr[i+1];
        }
    }
     printf("%d %d",num1,num2);
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
