# include <stdio.h>

int new(int *a) ;

int main(){
 int i = 4 ;
 printf("the value of the i is %d\n",i);
new( int i);
 printf("the value of the i is %d\n",i);

    return 0 ;
}
int new(int *a){
    int multple ;
    multple = *a +10   ;
     return multple ;

}