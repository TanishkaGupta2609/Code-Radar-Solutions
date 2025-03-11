int fibonacciSeries(int n)
{
    if (n==0){
        return 0;
    }
    if (n==1){
        return 0;
    }
    return fibonacciSeries(n-2)+fibonacciSeries(n-1);
    
    
for(int i=0;i<n;i++){
    printf("%d",fibonacciSeries(i));
    }

}
   