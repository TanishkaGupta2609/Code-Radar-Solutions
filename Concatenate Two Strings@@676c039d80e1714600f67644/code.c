#include <stdio.h>
#include <string.h>
int main(){
    char ch[100],ch_1[100];
    fgets(ch,100,stdin);
    fgets(ch_1,100,stdin);
    strcat(ch,ch_1);
    puts(ch);
    return 0;

}