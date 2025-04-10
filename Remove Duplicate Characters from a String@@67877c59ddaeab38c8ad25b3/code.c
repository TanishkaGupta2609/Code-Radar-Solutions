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

    for (int i = 0; i < n; i++) {
        if (name[i] == ' ') continue; // Keep space
        for (int j = i + 1; j < n; j++) {
            if (name[i] == name[j]) {
                name[j] = ' '; // Replace duplicates (after first occurrence) with space
            }
        }
    }

    // Print only first occurrences + spaces
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
