#include <stdio.h>
int printArray(int arr[],int n,int T){
    for(int i=0;i<n;i++){
        if(T==arr[i]){
            return i;
        }
    }
   return -1; 
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    printf("%d",printArray(arr,n,T));
    
    return 0;
}