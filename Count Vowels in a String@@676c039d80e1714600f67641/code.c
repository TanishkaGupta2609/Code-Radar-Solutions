#include <stdio.h>

void findVowel(char str[100]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
          if (str[i]=='a' ||str[i]=='e' || str[i]=='i' || str[i]=='0' || str[i]=='u' ){
            count++;
          }
    }
    printf("%d",count);
}
int main()
{
    char str[100];
    scanf("%s",str);
    findVowel(str[100]);
    return 0;
}