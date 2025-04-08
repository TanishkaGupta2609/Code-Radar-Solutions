#include <stdio.h>
#include <string.h>
#include <ctype.h>
void ToggleCase(char name[]){
    int n=strlen(name);
    for(int i=0;i<n;i++){
        if(name[i]==tolower(name[i])){
            name[i]=toupper(name[i]);
        }
        else if(name[i]=toupper(name[i])){
            name[i]=tolower(name[i]);
        }

    }
    for(int i=0;i<n;i++){
        printf("%c",name[i]);
    }
}
int main(){
    char name[200];
    fgets(name,200,stdin);
    ToggleCase(name);
    return 0;
}