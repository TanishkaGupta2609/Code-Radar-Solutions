#include <stdio.h>
#include <string.h>
void DuplicateArray(char name[]){
    int n=strlen(name);
    int hash[256]={};
    int index=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(hash[str[i]]==0){
                str[index++]=str[i];
                hash[str[i]]=1;
            }

        }
    }
    str[index]='\0';
    for(int i=0;i<n;i++){
        printf("%c",name[i]);
    }
}
int main(){
    char name[200];
    fgets(name,200,stdin);
    DuplicateArray(name);
    return 0;
}
