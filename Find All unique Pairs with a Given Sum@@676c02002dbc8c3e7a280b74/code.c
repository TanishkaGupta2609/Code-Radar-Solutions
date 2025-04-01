#include <stdio.h>
void UniqueArray(int arr[],int n,int k){
    int num_1,num_2;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                num_1=arr[i];
                num_2=arr[j];
            }
        }
    }
    printf("%d %d",num_1,num_2);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    UniqueArray(arr,n,k);
    return 0;
}