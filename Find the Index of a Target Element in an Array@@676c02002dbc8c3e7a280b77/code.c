#include <stdio.h>
void printArray(int arr[],int n,int T){
    for(int i=0;i<n;i++){
        if(T= arr[i]){
            printf("%d",i);
        }
    }
    printf("-1");
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int T;
    scanf("%d",&T);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printArray(arr,n,T);
    return 0;
}