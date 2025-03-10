# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_arr=arr[0];
    int min_arr=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>max_arr){
            max_arr=arr[i];
        }
        if (arr[i]<min_arr){
            min_arr=arr[i];
        }
        
    }
    printf("%d %d",max_arr,min_arr);
    return 0;
}