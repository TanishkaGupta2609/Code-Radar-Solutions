#include <stdio.h>
#include <string.h>
int findPalindrome(char arr[]){
    int n=strlen(arr);
    int ispalindrome=1;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            ispalindrome=0;
        }
    }
    if(ispalindrome){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
int main()
{
    char name[100];
    scanf("%s",name);
    findPalindrome(name);
    
    return 0;
}