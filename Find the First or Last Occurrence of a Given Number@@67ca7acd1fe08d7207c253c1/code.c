int findOccurrence(int arr[],int n,int target,int mode){
    int num;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            if(mode=='F'){
                num=i;
            }
        }
        else if(arr[n-i-1]==target){
            if(mode=='L'){
                num=n-i-1;
            }
        }
        else{
            num=-1;
        }
    }
    printf("%d",num);
}
