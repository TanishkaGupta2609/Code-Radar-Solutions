#include <stdio.h>
#include <string.h>
int anagramString(char str1[],char str2[]){
    for(int i=0;str1[i]!='\0';i++){
        for(int j=0;str2[j]!='\0';j++){
            if(str1[i]=str2[j]){
                return Yes;
            }
        }
    }
    return No;
}
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str1);
    printf("%c",anagramString(str1,str2));
    return 0;
    
}