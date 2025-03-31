#include <stdio.h>
void frequencyArray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int count =1;
    for(int i=0;i<n-1;i++){
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