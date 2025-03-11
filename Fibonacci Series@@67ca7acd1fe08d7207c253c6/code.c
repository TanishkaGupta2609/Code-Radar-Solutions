int fibonacciSeries(int n)
{
    int a=0;
    int b=1;
    int next;
    for(int i=0;i<n;i++){
        if(i==0){
            printf("%d",a);
        }
        else if(i==1){
            printf("%d",b);
        }
        else{
            next=a+b;
            printf("%d ",next);
            a=b;
            b=next;
        }
    }
}
   