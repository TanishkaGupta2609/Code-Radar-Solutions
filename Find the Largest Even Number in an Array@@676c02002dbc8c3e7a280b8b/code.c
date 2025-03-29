#include <stdio.h>
int SortedArray(int arr[],int n){
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
    return largest_num;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(SortedArray(arr,n)){
        printf("%d",SortedArray(arr,n))
    }
    else{
        printf("-1");
    }
    return 0;
}