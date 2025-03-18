#include <stdio.h>
#include <string.h>
int main(){
    char ch[100],ch_1[100];
    fgets(ch,100,stdin);
    fgets(ch_1,100,stdin);
    ch[strcspn(ch,"\n")]='\0';
    ch_1[strcspn(ch_1,"\n")]='\0';
    strcat(ch,ch_1);
    puts(ch);
    return 0;

}