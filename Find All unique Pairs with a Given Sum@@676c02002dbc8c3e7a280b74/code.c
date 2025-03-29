#include <stdio.h>
void UniqueArray(int arr[],int n,int k){
    for(int i=0;i<n;i++){
    //     if(arr[i]==arr[i+1] || arr[i]+arr[i+1]){
    //         printf("%d %d\n",arr[i],arr[i+1]);
    //         return;
    //     }
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                printf("%d %d\n",arr[i],arr[j]);
            }
            return;
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