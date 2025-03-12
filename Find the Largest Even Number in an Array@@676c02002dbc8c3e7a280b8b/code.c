#include <stdio.h>
int sortArray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>arr[i+1]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
    return arr[n-1];
            }
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
    int s=sortArray(arr,n);
    printf("%d",s);

}