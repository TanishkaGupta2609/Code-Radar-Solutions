int isPrime(int num){
   if(num<=1){
    return 0;
   }
   for(int i=2;i<num;i++){
    if(num%i==0){
        return 0;
    }
   }
   return 1;
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