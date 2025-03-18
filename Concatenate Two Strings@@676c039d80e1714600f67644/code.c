#include <stdio.h>
#include <string.h>
int main(){
    char ch[100],ch_1[100];
    fgets(ch,100,stdin);
    fgets(ch_1,100,stdin);
    char ch_12=strcat(ch,ch_1);
    puts(ch_12);
    return 0;

}