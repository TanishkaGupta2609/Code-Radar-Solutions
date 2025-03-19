#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str1);
    char *str=strstr(str1,str2);
    if(str-str1==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;

}