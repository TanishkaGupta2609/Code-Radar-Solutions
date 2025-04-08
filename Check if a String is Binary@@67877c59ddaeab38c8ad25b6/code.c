#include <stdio.h>
#include<string.h>
int checvk_binary(int arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]=='1' || arr[i]=='0'){
            return 1;
        }
         }
         return 0;
}
int main(){
    char name[200];
    scanf("%d",&name);
    if(checvk_binary){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
