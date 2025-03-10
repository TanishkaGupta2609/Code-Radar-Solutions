#include <stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=i;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=j;
        }
    }
    
    int med=sum/n;
    printf("%d",med);
    return 0;
}