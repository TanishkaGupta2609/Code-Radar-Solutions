#include <stdio.h>
int SortedArray(int arr[],int n){
    int found=0;
    int largest_num=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>largest_num){
                largest_num=arr[i];
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
        printf("%d",SortedArray(arr,n));
    }
    else{
        printf("-1");
    }
    return 0;
}