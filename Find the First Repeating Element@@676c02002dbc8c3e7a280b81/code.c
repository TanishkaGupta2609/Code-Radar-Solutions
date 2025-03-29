#include <stdio.h>
void repeatingElement(int arr[],int n){
    int num;
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                found=1;
                return;
            }
        }
    }
    if(!found){
        printf("-1");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // if(repeatingElement(arr,n)){
    //     printf("%d",repeatingElement(arr,n));
    // }
    // else{
    //     printf("-1");
    // }
    repeatingElement(arr,n);
    return 0;

}