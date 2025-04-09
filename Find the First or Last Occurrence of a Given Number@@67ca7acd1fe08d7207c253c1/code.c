int findOccurrence(int arr[],int n,int target,int mode){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            if(mode=='F'){
                printf("%d",i);
            }
        }
        else if(arr[n-i-1]==target){
            if(mode=='L'){
                printf("%d",n-i-1);
            }
        }
        else{
            printf("-1");
        }
    }
}