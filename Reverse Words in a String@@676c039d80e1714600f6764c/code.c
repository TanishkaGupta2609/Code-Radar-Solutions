#include <stdio.h>
#include <string.h>
void ReverseString(char name[200]){
    int n=strlen(name);
    for(int i=0;i<n/2;i++){
        arr[i]=name[n-i-1];
    }
    for(int i=0;i<n;i++){
        printf("%c",name[i]);
    }
}
int main(){
    char name[200];
    fgets(name,200,stdin);
    ReverseString(name);
    rerturn 0;
}