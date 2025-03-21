#include <stdio.h>
#include <string.h>
int anagramString(char str1[],char str2[]){
    int count1[256]={0};
    int count2[256]={0};
    for(int i=0;str1[i]!='\0';i++){
        count1[int(str1)]++;
    }
    for(int i=0;str2[i]!='\0';i++){
        count2[int(str2)]++;
    }
    if( count1[int(str1)]!=count2[int(str2)]){
        return 1;
    }
    return 0;
}
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    if(anagramString(str1,str2)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
    
}