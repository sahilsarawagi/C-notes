#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, i , nguess=1 , level;

    srand(time(0));
    number = rand() % 100 + 1; //generate a random number between 1 and 100
  //  printf("the number is %d\n", number);
    // while (number > i)
    // {
    //     printf("guess the number\n");
    //         scanf("%d", &i);
    //             printf("try something bigger\n");
    // }
    //             while (number<i)
    //             {
    //                 printf("guess the number\n");
    //         scanf("%d", &i);
    //                 printf ("try something smaller\n");
    //                 if (number==i)
    //                 {
    //                     printf("your guess is correct\n");
    //                     break;
    //                 }
                    
    //             }
    printf("Are you ready to try your luck\n");
    printf("HIT ENTER, to begin the game\n");
    printf("Choose the level of game 1,2 or 3\n");
    
    while (level!=1|| level!=2 || level!=3)
    {
        scanf("%d",&level);
    if (level==1)
    {
        printf("you have chosen level 1,you will get 15 chances to guess the number\n");
        break;
        
    }
    else if (level == 2)
    {
        printf("you have chosen level 2,you will get 10 chances to guess the number\n");
        break;

    }
    else if (level == 3)
    {
        printf("you have chosen level 3,you will get 5 chances to guess the number\n");
        break;
    }
    else
    {
        printf("YOU DONT NEED TO CHOOSE ANY LEVEL\n");
        printf("BECAUSE YOUR LEVEL OF STUPITDIY IS INFINTY\n");
        printf("LOSER,YOU CAN TRY AGAIN, NOW CHOOSE LEVEL 1,2 OR 3 \n");
    }
    
    
    }
    
    
    while (number<i || number>i || number ==i)
    {
        printf("guess the number between 1 to 100\n");
            scanf("%d", &i);
           if (number<i)
           {
               printf("try something smaller\n");
           }
           if (number>i)
           {
               printf("try something bigger\n");
           }
           if (number==i)
           {
               printf("your guess is correct\n");
               break;
           }
           if (level=1 && nguess==15)
           {
               break;
           }
            if (level=2 && nguess==10)
           {
               break;
           }
            if (level=3 && nguess==5)
           {
               break;
           }
           
           nguess++;
           
           

    }
   
     if (level=1 && nguess==15)
           {
            printf("you are such a loser,can't even able to guess in 15 trial\n");
           }
        else if (level=2 && nguess==10)
           {
               printf("you are such a loser,can't even able to guess in 10 trial\n");
           }
        else if (level=3 && nguess==5)
           {
               printf("you are such a overconfident loser,can't even able to guess in 5 trial\n");
           }
    else 
    {
        printf("YOU WON!!!!\n");
     printf("you tried %d times\n ",nguess); 
    }
    
                
      

    

    return 0;
}