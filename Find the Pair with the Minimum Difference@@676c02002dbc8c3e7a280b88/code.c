#include <stdio.h>
void MinDiffArray(int arr[],int n){
    int num;
    int diff_num=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            arr[i]-arrr[j]=abs(num);
            if(num<diff_num){
                diff_num=num;
            }
            printf("%d %d",arr[i],arr[j]);
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