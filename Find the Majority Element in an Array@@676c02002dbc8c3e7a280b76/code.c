#include <stdio.h>
int majorityElement(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            else{
                if{(count>n/2){
                    return arr[i];
                }
                }
            }
        }
    }
    return 1;
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
    int s=majorityElement(arr,n,k);
    if(majorityElement(arr,n,k)){
        printf("%d",s);
    }
    else{
        printf("-1");
    }
    return 0;
}