#include <stdio.h>
int SumOfDigits(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        while(arr[i]>0){
            int temp=i%10;
            count+=temp;
            i=i/10;
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=SumOfDigits(arr,n);
    printf("%d",result);
    return 0;
}