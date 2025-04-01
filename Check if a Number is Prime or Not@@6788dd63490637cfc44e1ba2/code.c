#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("Not Prime");
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
     if(count>0){
            printf("Not Prime");
        }
    else{
        printf("Prime");
    }
}