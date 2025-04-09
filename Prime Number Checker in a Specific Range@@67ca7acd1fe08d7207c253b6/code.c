int isprime(int num){
    if(num<=1){
        return 0;
    }
    int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count>2){
        return 0;
    }
return 1;
}
void printPrimesInRange(int a,int b){
    int found=0;
    for(int i=a;i<=b;i++){
        if(isprime(i));
        printf("%d",i);
        found=1;
    }
    if(!found){
        printf("No prime numbers");
    }
}