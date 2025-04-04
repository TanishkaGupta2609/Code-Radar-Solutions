#include <stdio.h>
void PalindromicArray(int arr[],int n){
    int count=0,rev;
    for(int i=0;i<n;i++){
       int num=arr[i];
       int original=num;
       int rev=0;
       while(num>0){
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
       } 
       if(rev==original){
        count++;
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
    PalindromicArray(arr,n);
    return 0;
}