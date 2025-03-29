#include <stdio.h>
int PrimeNumber(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=2;j<n;j++){
            if(i%j!=0)
                count++;
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
int s=PrimeNumber(arr,n);
printf("%d",s);
return 0;   
}