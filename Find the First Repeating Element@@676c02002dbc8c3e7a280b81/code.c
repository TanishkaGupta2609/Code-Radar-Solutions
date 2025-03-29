#include <stdio.h>
int repeatingElement(int arr[],int n){
    int num;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                num=arr[i];
            }
        }
        return num;
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d",&arr[i]);
    }
    if(repeatingElement(arr,n)){
        printf("%d",repeatingElement(arr,n));
    }
    else{
        printf("-1");
    }
    return 0;

}