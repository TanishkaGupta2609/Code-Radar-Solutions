void selectionSort(arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int printArray(arr,int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}