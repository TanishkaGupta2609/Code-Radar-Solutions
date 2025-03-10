#include <stdio.h>
int mainarray(int arr[],int n)
{
    int count=0,count_1=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
             return count+=1;
        }
        else{
            return count_1+=1;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s=mainarray(arr[],n);
    printf("%d",s);
    return 0;
}