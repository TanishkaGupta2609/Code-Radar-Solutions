#include <stdio.h>
int mainarray(int arr[],int n)
{
    int count=0;count_1=0
    for(int i=0;i<n;i++){
        if(i%2==0){
             count+=1;
        }
        else{
             count_1+=1;
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d",count,count_1);
    return 0;
}