#include <stdio.h>
#include <ctype.h>
int main()
{
    char name[100];
    fgets(name,100,stdin);
    for(int i=0;name[i]!='\0';i++){
        char name1[100]=toupper(name[i]);
    }
    puts(name1);
    return 0;
}