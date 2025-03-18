#include <stdio.h>
#include <ctype.h>
int main()
{
    char name[100];
    scanf("%s",name);
    for(int i=0;name[i]!='\0';i++){
        printf("%s",toupper(name[i]));
    }
    return 0;
}