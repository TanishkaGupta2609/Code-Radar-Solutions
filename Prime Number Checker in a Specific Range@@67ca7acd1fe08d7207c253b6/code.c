void printPrimesInRange(int a,int b){
    int count=0;
    int arr[n];
    for(int i=a;i<=b;i++){
        for(int j=2;j<=i;j++){
            if(i%j!=0);
            count++;
            arr[i++];
        }
    }
    if(count>2){
        printf("No prime numbers");
    }
    else{
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }
}