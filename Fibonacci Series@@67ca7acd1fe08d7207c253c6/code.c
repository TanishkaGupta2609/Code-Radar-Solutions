fibonacciSeries(int n)
{
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    fib_n1=fibonacciSeries(n-1);
    fib_n2=fibonacciSeries(n-2);
    fib_n=fib_n1+fib_n2;
    printf("%d",fib_n);
}

