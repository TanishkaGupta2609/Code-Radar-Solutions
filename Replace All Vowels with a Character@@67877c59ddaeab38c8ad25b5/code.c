#include <stdio.h>
#include <string.h>
void ReplaceVowels(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            char temp=str[i];
            str[i]=ch;
            ch=temp;
        }
    }
    printf("%s",str);
}
int main(){
    char str[100];
    scanf("%s",str);
    char ch;
    scanf("%c",&ch);
    ReplaceVowels(str,ch);
    return 0;
}