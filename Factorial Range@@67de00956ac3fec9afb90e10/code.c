#include <stdio.h>
void factorial(int n){
    int fact=0;
    if(n==0 || n==1){
        printf("1");
    }
    for(int i=0;i<n;i++){
        fact*=i;
        printf("%d",fact);
    }
}
int main(){
    int n;
    scanf("%d",n);
    factorial(n);
    return 0;
}