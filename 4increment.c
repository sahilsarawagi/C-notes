#include <stdio.h>
int main(){

int i = 5 ;
printf("the value after i++ is %d\n", i++);      //i++ ---->pehle print karo phir increment karo
printf("the value of i is %d\n", i);
printf("the value after ++i is %d\n",++i);       //++i -----> pehle incriment karo phir print karo
printf("the value of i is %d\n", i);

// same case is  for -- 

printf("the value after i-- is %d\n", i--);      //i-- ---->pehle print karo phir decrement karo
printf("the value of i is %d\n", i);
printf("the value after --i is %d\n",--i);       //--i -----> pehle decriment karo phir print karo
printf("the value of i is %d\n", i);

i+=10; // --> increment i by 10
printf("the value of i is %d\n",i);



    return 0;
}