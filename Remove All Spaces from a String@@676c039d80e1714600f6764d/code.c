#include <stdio.h>
#include <string.h>
void SpaceString(char arr[100]){
    int j;
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]=='\0'){
            continue;
        }
        printf("%c",arr[i]);
    }
}
int main(){
    char name[200];
    fgets(name,200,stdin);
    SpaceString(name);
    return 0;
}