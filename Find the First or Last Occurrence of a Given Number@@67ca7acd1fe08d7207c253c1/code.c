int findOccurrence(int arr[],int n,int target,int mode){
    int num=-1;
   if(mode=='F'){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            num=i;
            break;
        }
    }
   }
   else if(mode=='L'){
    for(int i=n;i>0;i--){
        if(arr[i]==target){
            num=i;
            break;
        }
    }
   }
   return num;
}
