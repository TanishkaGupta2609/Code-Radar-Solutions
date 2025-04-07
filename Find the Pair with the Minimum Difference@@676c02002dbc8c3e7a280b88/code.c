#include <stdio.h>
#include <stdlib.h>
void MinDiffArray(int arr[],int n){
    int num,num1=arr[0],num2=arr[1];
    int max_diff=arr[0]-arr[1];
    max_diff=abs(max_diff);
    if(n<2){
        printf("-1");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            num=arr[i]-arr[j];
            num=abs(num);
            if(num<max_diff){
                max_diff=num;
                num1=arr[i];
                num2=arr[j];
                printf("%d %d",num1,num2);
            }
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