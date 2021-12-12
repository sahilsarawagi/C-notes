# include<stdio.h>
int main(){

int i,*j,*k,m,*p ;
j= &i ;
k=&m ;
p=&i ;

printf("the value the pointer 1 is %u\n",j);
printf("the value the pointer 2 is %u\n",k);
//add 
printf("the value the pointer 1 is %u\n",j+1);
printf("the value the pointer 2 is %u\n",k+1);
//subtract

printf("the value the pointer 1 is %u\n",j-1);
printf("the value the pointer 2 is %u\n",k-1);
//pointer -pointer

printf("the value the ptr-ptr is %u\n",j-k);

//comparison
printf("the value the pointer 1 is %u\n",j);
printf("the value the pointer 2 is %u\n",p);

printf("the value the ptr-ptr is %u\n",j-p);

    return 0 ;
}