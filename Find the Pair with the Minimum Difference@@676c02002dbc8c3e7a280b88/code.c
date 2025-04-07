#include <stdio.h>
#include <stdlib.h>
void MinDiffArray(int arr[],int n){
    int num,num1,num2;
    int max_diff=arr[0]-arr[1];
    max_diff=abs(max_diff);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            arr[i]-arr[j]==num;
            num=abs(num);
            if(num<max_diff){
                max_diff=num;
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    printf("%d %d",num2,num1);
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