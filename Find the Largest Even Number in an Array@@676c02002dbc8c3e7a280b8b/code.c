#include <stdio.h>
void SortedArray(int arr[],int n){
    int found=0;
    int largest_num;
    for(int i=0;i<n-1;i++){
        if(arr[i]%2==0){
            if(arr[i]>arr[i+1]){
                largest_num=arr[i];
                found=1;
            }
            else if(arr[i-1]>arr[i-2]){
                largest_num=arr[i-1];
                found=1;
            }
        } 
    }
    printf("%d",largest_num);
    if(!found){
        printf("-1");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    SortedArray(arr,n);
    return 0;
}