#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int my_num, guess_num;
    srand(time(NULL));

    my_num = rand() % 100;

    printf("you have to guess a number in range between 0-99 so lets start\n");

    while(1)
    {
        printf("Enter Your guessed number\n\n");
        scanf("%d",&guess_num);

        if (my_num == guess_num)
        {
            printf("YOU GOT IT RIGHT HURRRAY !!!!!!!!!!!!!!!!!!!!!!\n\n");
        }
        else if (my_num > guess_num)
        {
            printf("your guessed number %d is  lower than my number \n\n",guess_num);
        }
        else if (my_num < guess_num)
        {
            printf("your guessed number %d is higher than my number \n\n",guess_num);
        }
        
        
        
    }
    return 0;
}