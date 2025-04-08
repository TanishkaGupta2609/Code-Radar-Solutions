#include <stdio.h>
#include <string.h>
void replaceChar(char arr[],char k,char t){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            arr[i]==t;
        }
    }
    for(int i=0;i<n;i++){
        printf("%s",arr[i]);
    }
}
int main(){
    char arr[100];
    scanf("%s",arr);
    char k;
    scanf("%c",&k);
    char t;
    scanf("%c",&t);
    replaceChar(arr,k,t);
    return 0;
}