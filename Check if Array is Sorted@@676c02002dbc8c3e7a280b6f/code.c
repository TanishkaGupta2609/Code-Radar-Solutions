#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]>arr[j]){
                int temp=1;
            }
            else{
                int temp=0;
            }
        }
    }
    if (int temp=1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
   return 0;
    

}