#include <stdio.h>
void MaxproductNum(int arr[],int n){
    int max_prod=1;
    int prod_num;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            prod_num=arr[i]*arr[j];
                if(prod_num>max_prod){
                    max_prod=prod_num;
                }
            
        }
    }
    printf("%d",max_prod);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    MaxproductNum(arr,n);
    return 0;
}