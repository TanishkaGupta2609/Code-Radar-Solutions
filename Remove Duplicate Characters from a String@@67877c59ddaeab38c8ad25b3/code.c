#include <stdio.h>
#include <string.h>
void DuplicateArray(char name[]){
    int n=strlen(name);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(name[i]==name[j]){
                name[j]=' ';
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%c",name[i]);
    }
}
int main(){
    char name[200];
    fgets(name,200,stdin);
    DuplicateArray(name,n);
    return 0;
}