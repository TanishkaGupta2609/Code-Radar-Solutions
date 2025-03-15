#include <stdio.h>
void mainrray(int arr[],int n){
    if (n==0 || n==1){
         printf("-1");
         return;
    }
    if(n==2){
        if(arr[0]>arr[1]){
            printf("%d",arr[0]);
        }

        else{
            printf("%d",arr[1]);
        }
        return;
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            return;
        }
    }
    printf("-1");

   
}
    
    
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mainrray(arr,n);
    return 0;
}