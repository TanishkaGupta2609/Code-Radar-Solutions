#include <stdio.h>
int majorityElement(int arr[],int n){
    if(n==1){
        return 1;
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
             return arr[i];
                }
            
        }
    
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s=majorityElement(arr,n);
    if(majorityElement(arr,n)!=-1){
        printf("%d",s);
    }
    else{
        printf("-1");
    }
    return 0;
}