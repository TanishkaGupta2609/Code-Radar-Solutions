#include <stdio.h>
#include <ctype.h>
int main()
{
    char name[100];
    fgets(name,100,stdin);
    for(int i=0;name[i]!='\0';i++){
        name==toupper(name[i]);
    }
    puts(name);
    return 0;
}