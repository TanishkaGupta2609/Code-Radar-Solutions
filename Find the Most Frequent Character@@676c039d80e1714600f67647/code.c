#include <stdio.h>
#include <string.h>
void frequentCharacter(char name[500]){
    int count=0;
    int max_count=1;
    char ch;
    int n=strlen(name);
    for(int i=0;i<n;i++){
        if(name[i]==' ')continue;
        for(int j=0;j<n;j++){
            if(name[i]==name[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count=count;
            ch=name[i];
        }
    }
    printf("%c",ch);
}
int main(){
    char name[200];
    fgets(name,200,stdin);
    frequentCharacter(name);
    return 0;
}