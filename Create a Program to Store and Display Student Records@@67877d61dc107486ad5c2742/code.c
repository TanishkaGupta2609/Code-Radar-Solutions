#include <stdio.h>
struct students{
    int rollnumber;
    int name[50];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct students clas[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&clas[i].rollnumber,&clas[i].name,&clas[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",clas[i].rollnumber,clas[i].name,clas[i].marks);
    }
    return 0;
}