#include <stdio.h>
void frequencyArray(int arr[],int n,int freq[]){
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=-1;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",freq[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=0;
    }
    frequencyArray(arr,n,freq);
    return 0;

}