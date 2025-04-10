#include <stdio.h>
#include <string.h>
void ReverseString(char name[200]){
    int n=strlen(name);
    for(int i=0;i<n/2;i++){
        int temp=name[i];
        name[i]=name[n-i-1];
        name[n-i-1]=name[i];
        if(name[i]==' '){
        continue;
    }
    }
    printf("%s",name[]);
}
int main(){
    char name[200];
    fgets(name,200,stdin);
    ReverseString(name);
    return 0;
}