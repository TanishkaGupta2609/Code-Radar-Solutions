#include <stdio.h>
void frequencyArray(int arr[],int n,int freq[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i]!=0){
            printf("%d %d\n",arr[i],freq[i]);
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
        freq[i]=-1;
    }
    frequencyArray(arr,n,freq);
    return 0;

}