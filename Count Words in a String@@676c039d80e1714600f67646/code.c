#include <stdio.h>
#include <string.h>
void CountWords(char name[]){
    int count=0;
    int n=strlen(name);
    for(int i=0;i<n;i++){
         if ((i == 0 && name[i] != ' ' && name[i] != '\n') ||
            (name[i] != ' ' && name[i - 1] == ' ')) 
{
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    char name[200];
    fgets(name,200,stdin);
    CountWords(name);
    return 0;
}