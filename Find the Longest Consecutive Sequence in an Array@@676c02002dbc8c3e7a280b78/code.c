#include <stdio.h>
void consecutiveArray(int arr[],int n){
    // int count=1,max_count=1;
    // for(int i=0;i<n-1;i++){
    //     if(arr[i+1]==arr[i]+1 || arr[i+1]==arr[i]-1){
    //         count++;
    //     }
    //     else if(arr[i]==arr[i+1]){
    //         continue;
    //     }
    //     else{
    //         count=1;
    //     }
    //     if(count>max_count){
    //             max_count=count;
    //         }
    // }
    // printf("%d",max_count);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        int count=1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]==arr[i]+1)
            count++;
        }
        printf("%d",count);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    consecutiveArray(arr,n);
}
