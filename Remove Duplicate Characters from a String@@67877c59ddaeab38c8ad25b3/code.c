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

void DuplicateArray(char name[]) {
    int n = strlen(name);

    // Clean newline character from fgets
    if (name[n - 1] == '\n') {
        name[n - 1] = '\0';
        n--;
    }

    // Iterate through the string
    for (int i = 0; i < n; i++) {
        if (name[i] == ' ') continue;  // Skip spaces

        // Compare with subsequent characters to find duplicates
        for (int j = i + 1; j < n; j++) {
            if (name[i] == name[j]) {
                name[j] = ' ';  // Replace duplicates with space
            }
        }
    }

    // Print the modified string without the spaces (except between words)
    for (int i = 0; i < n; i++) {
        if (name[i] != ' ') {
            printf("%c", name[i]);
        }
    }
}

int main() {
    char name[200];
    fgets(name, 200, stdin);
    DuplicateArray(name);
    return 0;
}
