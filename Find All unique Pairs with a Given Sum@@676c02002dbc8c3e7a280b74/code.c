#include <stdio.h>
void UniqueArray(int arr[],int n,int k){
    int isduplicate=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                isduplicate=1;
            }
        }
        if(isduplicate=1){
            printf("%d %d/n",arr[i],arr[j]);
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