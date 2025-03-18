#include <stdio.h>
#include <string.h>
void findVowel(arr[i]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
          if (arr[i]='a' ||arr[i]='e' || arr[i]='i' || arr[i]='0' || arr[i]='u' || ){
            count++;
          }
    }
    printf("%d";count);
}
int main()
{
    char str[100];
    fgets(str,100,stdin);
    findVowel(str[100]);
    return 0;
}