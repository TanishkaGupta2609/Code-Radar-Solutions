#include <stdio.h>
int RunningSum(int arr[],int n){
    for (int i=0;i<n;i++){
        sum+=arr[i];
        printf("%d",sum);
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
       RunningSum(arr,n);
    }
    return 0;
}