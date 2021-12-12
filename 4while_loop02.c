#include <stdio.h>
int main(){

int a ;
scanf("%d",&a);
//while(a>11) ---->this will lead to infinite loop
while (a<3){
    printf("%d\n",a);
    a++;
}

                                


    return 0;
}