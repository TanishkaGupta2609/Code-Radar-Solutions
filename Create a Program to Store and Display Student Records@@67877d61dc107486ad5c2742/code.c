#include <stdio.h>
struct students{
    int roll number;
    int name[50];
    int marks;
}
int main(){
    int n;
    scanf("%d",&n);
    struct students clas[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f",&clas.roll number[i],&clas.name[i],&clas.marks[i]);
    }
    for(i=0;i<n;i++){
        printf("Roll Number: %d,Name: %s,Marks: %.2f",clas.roll number[i],clas.name[i],clas.marks[i]);
    }
    return 0;
}