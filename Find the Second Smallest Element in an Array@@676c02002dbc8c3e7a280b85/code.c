#include <stdio.h>
int SmallestElement(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        return arr[i+1];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   if(SmallestElement(arr,n)){
    printf("%d",SmallestElement(arr,n));
   }
   else{
    printf("-1");
   }
    return 0;
}