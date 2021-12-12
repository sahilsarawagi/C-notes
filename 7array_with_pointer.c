# include <stdio.h>



int main(){

    int marks[4] ;
    int *ptr ;
    ptr =&marks[0] ;
    ////instead of ptr =&marks[0] we can also write ptr =marks ////
    for (int i = 0; i < 5; i++)
    {
        printf("enter the mark of the student %d\n",i+1) ;
        scanf("%d",ptr+i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the mark of the student %d is %d\n",i+1 , marks[i]) ;
        
    }
    

    return 0 ;
}