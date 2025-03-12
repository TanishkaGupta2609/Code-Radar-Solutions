#include <stdio.h>
int palindromeArray(int arr[],int n){
    for(int i;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    palindromeArray(arr,n);
    printf("%d",&arr[n]);
}