# include <stdio.h>

int new(int i ) ;

int main(){
     int a=4 ;
     printf("the value of a is %d\n",a) ;
     printf("the new value of a is %d\n",new(a)) ;
     
     return 0; 
}
int new(int i ){
return i*10 ;

}