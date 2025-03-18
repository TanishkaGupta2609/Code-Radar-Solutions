#include <stdio.h>
#include <ctype.h>
int main()
{
    char name[100];
    scanf("%s",name);
    printf("%s",toupper(name));
    return 0;
}