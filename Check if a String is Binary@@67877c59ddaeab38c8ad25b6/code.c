#include <stdio.h>
#include<string.h>
char check_binary(int arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]=='1' || arr[i]=='0'){
            return 1;
        }
         }
         return 0;
}
int main(){
    char name[200];
    scanf("%c",&name);
    if(check_binary){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
