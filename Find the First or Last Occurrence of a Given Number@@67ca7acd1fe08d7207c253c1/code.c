int findOccurrence(int arr[],int n,int target,int mode){
    int num;
    for(int i=0;i<n-1;i++){
        if(arr[i]==target){
            if(mode=='F'){
                num=i;
                break;
            }
        }
        else if(arr[n-i-1]==target){
            if(mode=='L'){
                num=n-i-1;
                break;
            }
        }
        else{
            num=-1;
            break;
        }
    }
    printf("%d",num);
}
