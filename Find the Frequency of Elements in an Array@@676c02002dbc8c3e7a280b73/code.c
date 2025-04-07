#include <stdio.h>
void frequencyArray(int arr[],int n){
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(visited[i]==1)continue;
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
            }
        }
        printf("%d %d\n",arr[i],count);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    frequencyArray(arr,n);
    return 0;

}