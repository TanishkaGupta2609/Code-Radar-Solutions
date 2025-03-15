#include <stdio.h>
int RunningSum(int arr[n],int n){
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int result=RunningSum(arr[i]);
        printf("%d",result);
    }
    return 0;
}