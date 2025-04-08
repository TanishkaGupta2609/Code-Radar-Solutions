#include <stdio.h>
#include<string.h>
char check_binary(char arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]!='1' || arr[i]!='0'){
            return 0;
            break;
        }
         }
         return 1;
}
int main(){
    char name[200];
    scanf("%s",name);
    if(check_binary(name)){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
