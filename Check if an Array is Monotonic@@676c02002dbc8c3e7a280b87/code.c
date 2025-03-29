#include <stdio.h>
int increasingArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        return 0;
        else if(arr[i]==arr[i+1])
        return 1;
    }
    return 1;
}
int decreasingArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1])
        return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(increasingArray(arr,n) || decreasingArray(arr,n)){
        printf("YES");
    }
    else if(n==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}