#include <stdio.h>
void PalindromicArray(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
       int num=arr[i];
       while(num>0){
        int digit=num%10;
        rev+=digit;
        num/10;
       } 
       if(rev==num){
        count++;
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
    PalindromicArray(arr,n);
    return 0;
}