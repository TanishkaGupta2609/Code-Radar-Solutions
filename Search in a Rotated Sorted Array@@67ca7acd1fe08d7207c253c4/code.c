int searchInRotatedArray(int arr[],int n,int target){
    int ans;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            ans=i;
        }
        else{
            ans=-1;
        }
    }
}
