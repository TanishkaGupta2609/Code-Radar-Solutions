#include <stdio.h>
#include <string.h>
int main(){
    char ch[100];
    scanf("%s",ch);
    int len=strlen(ch);
    for(int i=0;i<len/2;i++){
        char temp=ch[i];
        ch[i]=ch[n-i-1];
        ch[n-i-1]=temp;
    }
    printf("%s",ch);
}