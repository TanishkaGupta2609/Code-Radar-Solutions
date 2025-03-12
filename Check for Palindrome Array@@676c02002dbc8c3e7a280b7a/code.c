#include <stdio.h>
int palindromeArray(int arr[],int n){
    for(int i;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   if(palindromeArray(arr,n)){
    printf("YES");
   }
   else{
    printf("NO");
   }
   return 0;
}
