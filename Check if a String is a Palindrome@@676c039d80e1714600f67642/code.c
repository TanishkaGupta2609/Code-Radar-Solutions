#include <stdio.h>
#include <string.h>
int findPalindrome(char arr[]){
    int n=strlen(arr);
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==arr[n-i-1]){
            return 0;
        }
    }
    return 1;
}
int main()
{
    char name[100];
    scanf("%s",name);
    char s=findPalindrome(name);
    if(s){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}