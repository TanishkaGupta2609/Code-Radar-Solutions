#include <stdio.h>
#include <string.h>
int anagramString(char str1[],char str2[]){
    int count1[256]={0};
    int count2[256]={0};
    for(int i=0;str1[i]!='\0';i++){
        count1[(int)str1[i]]++;
    }
    for(int i=0;str2[i]!='\0';i++){
        count2[(int)str2[i]]++;
    }
    for(int i=0;i<256;i++){
        if(count1[i]!=count2[i]);
        return 0;
    }
    
    return 1;
}
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    if(anagramString(str1,str2)){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
    
}