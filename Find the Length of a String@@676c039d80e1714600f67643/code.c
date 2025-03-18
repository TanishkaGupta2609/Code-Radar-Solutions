#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    fgets(name,100,stdin);
    printf("%lu",strlen(name));
    return 0;
}