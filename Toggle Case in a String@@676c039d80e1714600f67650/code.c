#include <stdio.h>
#include <string.h>
#include <ctype.h>
void ToggleCase(char name[]){
    int n=strlen(name);
    for(int i=0;i<n;i++){
        if(name[i]==name.lower){
            name[i]=name.upper;
        }
        else if(name[i]=name.upper){
            name[i]=name.lower;
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