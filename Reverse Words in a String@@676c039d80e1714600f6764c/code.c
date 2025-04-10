#include <stdio.h>
#include <string.h>
void ReverseString(char name[200]){
    int n=strlen(name);
    for(int i=0;i<n;i++){
        name[i]=name[n-i-1];
        if(name[i]==' '){
            continue;
        }
    }
    for(int i=n;i>0;i--){
        name[n-i-1]=name[i];
        if(name[n-1-i]==' '){
            continue;
        }
    }
    for(int i=0;i<n;i++){
        printf("%c",name[i]);
    }
}
int main(){
    char name[200];
    fgets(name,200,stdin);
    ReverseString(name);
    return 0;
}