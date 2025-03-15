#include <stdio.h>
int SumOfDigits(int num){
    int count=0;
    num=abs(num);
        while(num>0){
            int temp=num%10;
            count+=temp;
            num=num/10;
        
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
    for(int i=0;i<n;i++){
        printf("%d ",SumOfDigits(arr[i]));
    }
    
    
    return 0;
}