#include <stdio.h>
#include <string.h>
void Palindromestring(char name[500]){
    int n=strlen(name);
    int ispalindrome=0;
    for(int i=0;i<n;i++){
        if(name[i]==' ')continue;
    }
    for(int i=0;i<n/2;i++){
        if(name[i]==name[n-i-1]){
            ispalindrome=1;
        }
    }
    if(ispalindrome){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
int main(){
    char name[500];
    fgets(name,500,stdin);
    Palindromestring(name);
    return 0;
}