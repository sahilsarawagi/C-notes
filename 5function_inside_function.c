#include <stdio.h>
void display();
void display2();
void display3();
int main()
{
    display();

    return 0;
}
void display()
{
    printf("good morning\n");
    display2();
}
void display2()
{
    printf("good afternoon\n");
    display3();
}
void display3()
{
    printf("good night\n");
}



