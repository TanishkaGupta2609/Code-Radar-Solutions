#include <stdio.h>
void sortArray(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sortArray(a,n);
    if (a[1]!=a[2]){
         printf("%d",a[n-2]);   
    }
    else if(n<2){
        printf("-1");
    }
    else{
        printf("-1");
    }
   
   
}