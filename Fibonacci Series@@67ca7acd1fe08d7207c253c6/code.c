int fibonacciSeries(int n)
{
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int fib_n1=fibonacciSeries(n-1);
    int fib_n2=fibonacciSeries(n-2);
    int fib_n=fib_n1+fib_n2;
    return fib_n;
    for(int i=0;i<n;i++){
    printf("%d",fib_n);
}
}

