#include <stdio.h>
int PrimeNumber(int num){
        for(int j=2;j*j<num;j++){
            if(j*j%num==0)
            return 0;
        }
    return 1;
}
int isPrime(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(PrimeNumber(arr[i])){
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
int s=isPrime(arr,n);
printf("%d",s);
return 0;   
}