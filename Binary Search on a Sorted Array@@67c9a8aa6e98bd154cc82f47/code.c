int binarySearch(int arr[],int n,int target){
    for(int i=0;i<n/2;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}