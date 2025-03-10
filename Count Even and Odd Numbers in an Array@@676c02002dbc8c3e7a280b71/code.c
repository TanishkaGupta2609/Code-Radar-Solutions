#include <stdio.h>
int mainarray(int arr[],int n)
{
    for(i=0;i<n;i++){
        if(i%2==0){
            int count+=1;
        }
        else{
            int count_1+=1;
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d",count,count_1);
    return 0;
}