#include <stdio.h>
#include<string.h>
void checkBinary(char name[]){
    int n=strlen(name);
    int Isbinary=0;
    for(int i=0;i<n;i++){
        if(name[i]=='1' || name[i]=='0'){
            Isbinary=1;
        }
    }
    if(Isbinary){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
int main(){
    char name[200];
    scanf("%s",name);
    checkBinary(name);

    return 0;
}
