#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    scanf("%s",name);
    strupr(name);
    puts(name);
    return 0;
}