#include <stdio.h>
#include <string.h>
void ReplaceVowels(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u'||
        str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U'){
            str[i]=' ';
        }
    }
    printf("%s",str);
}
int main(){
    char str[100];
    scanf("%s",str);
    char ch;
    scanf(" %c",&ch);
    ReplaceVowels(str,ch);
    return 0;
}