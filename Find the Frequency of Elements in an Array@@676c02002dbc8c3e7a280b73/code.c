#include <stdio.h>
void frequencyArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int count =1;
    for(int i=0;i<n;i++){
        if(i<n-1 && arr[i+1]==arr[i]){
            count++;
        }
        else{
            printf("%d %d\n",arr[i],count);
            count =1;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    frequencyArray(arr,n);
    return 0;

}