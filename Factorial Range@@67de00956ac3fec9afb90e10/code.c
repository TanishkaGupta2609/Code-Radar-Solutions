
void factorialRange(int n){
    int fact=0;
    if(n==0 || n==1){
        printf("1");
    }
    for(int i=0;i<n;i++){
        fact*=i;
        printf("%d",fact);
    }
}
