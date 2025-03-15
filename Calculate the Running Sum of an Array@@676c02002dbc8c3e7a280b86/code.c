#include <stdio.h>
int RunningSum(int num){
    count=0;
    while(num>0){
        int temp=num%10;
        count+=temp;
        num=num/10;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",RunningSum(arr[i]));
    }
    return 0;