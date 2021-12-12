# include <stdio.h>

void adress(int a);
int main(){

int i ;
printf("the adress of i is %u\n",&i);
adress(i);


    return 0 ;
}
void adress(int a){
    printf("the adress of a is %u\n",&a);
    
}