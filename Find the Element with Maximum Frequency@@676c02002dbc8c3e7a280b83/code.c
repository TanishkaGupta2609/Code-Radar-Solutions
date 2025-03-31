#include <stdio.h>
void mostFrequent(int arr[],int n){
    int count=1;
    int max_count=1;
    int maxcount;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            if(max_count<count){
                max_count=count;
                maxcount=arr[i];
        }
        count=1;
        }
    }
    if (count > max_count) {
        max_count = count;
        maxcount = arr[n - 1];
    }
    printf("%d",maxcount);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mostFrequent(arr,n);
    return 0;
}