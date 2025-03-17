#include <stdio.h>
#include <string.h>
int main(){
    char ch[100],ch_1[100];
    scanf(" %s ",ch);
    scanf(" %s ",ch_1);
    char *ch_12=strcat(ch,ch_1);
    printf("%s",ch_12);
    return 0;

}