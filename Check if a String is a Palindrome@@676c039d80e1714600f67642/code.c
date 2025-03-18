#include <stdio.h>
void findPalindrome(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=arr[n-i-1]){
            printf("Yes");
        }
    }
    printf("No");
}
int main()
{
    char name[100];
    scanf("%d",name);
    findPalindrome(name);
    return 0;
}