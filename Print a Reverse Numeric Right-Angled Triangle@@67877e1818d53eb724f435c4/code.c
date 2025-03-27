#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num=1;
        for(int j=n;j>i;j--){
            num++;
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}