# include<stdio.h>
int main()
{ 
int i=1 , sum=0 , n=10 ;
    do
    {
        sum+=i;
        i++;
    } while (i<=n);
    printf("the sum of 1 to 10 natural number%d\n",sum);



    return 0;
}