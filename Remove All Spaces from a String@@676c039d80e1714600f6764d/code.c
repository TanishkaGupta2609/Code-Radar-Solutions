#include <stdio.h>
#include <string.h>
void SpaceString(char arr[100]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]==' '){
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