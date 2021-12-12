#include <stdio.h>
void display();   //function prototype
int main(){
    int a ;
    printf("intializing display function\n");

display();         // function call
printf("display function finised its work\n");


    return 0;
}
// function definition
void display(){
    printf("This is display\n");

}