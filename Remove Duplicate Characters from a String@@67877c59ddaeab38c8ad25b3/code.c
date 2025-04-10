// #include <stdio.h>
// #include <string.h>
// void DuplicateArray(char name[]){
//     int n=strlen(name);
//     char ch=' ';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(name[i]==name[j]){
//                 name[j]=ch;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%c",name[i]);
//     }
// }
// int main(){
//     char name[200];
//     fgets(name,200,stdin);
//     DuplicateArray(name);
//     return 0;
// }
#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int n = strlen(str);
    int hash[256] = {0};  // Boolean array to track character appearances

    int index = 0;  // To track where to store characters in the new string
    for (int i = 0; i < n; i++) {
        // If character is not in the hash (i.e., not seen before), add it
        if (hash[str[i]] == 0) {
            str[index++] = str[i];
            hash[str[i]] = 1;  // Mark this character as seen
        }
    }

    str[index] = '\0';  // Null-terminate the string
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);  // Read input

    removeDuplicates(str);  // Remove duplicates from the string
    printf("%s", str);  // Output the modified string
    return 0;
}
