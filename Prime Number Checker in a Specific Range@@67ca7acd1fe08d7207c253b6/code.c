int isPrime(int num){
    int isPrime=1;
    if(num<=1){
        isPrime=0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            isPrime =0;
        }
    }
    return isPrime;
}
void printPrimesInRange(int a,int b){
    int found=0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
        printf("%d ",i);
        found=1;
    }
    }
    if(!found){
        printf("No prime numbers");
    }
}