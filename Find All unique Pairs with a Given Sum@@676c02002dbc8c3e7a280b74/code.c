#include <stdio.h>
void UniqueArray(int arr[],int n,int k){
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] && arr[i]+arr[j]==k){
                printf("%d %d",arr[i],arr[j]);
                return;
            }
            else if(arr[i]+arr[j]==k){
                 printf("%d %d\n",arr[i],arr[j]);
                found=1;
            }
        }
    }
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