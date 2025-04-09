void printPrimesInRange(int a,int b){
    int count=0;
    for(int i=a;i<=b;i++){
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                printf("%d ",i);
            }
        }
    }
}