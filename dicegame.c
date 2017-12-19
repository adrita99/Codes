#include<stdio.h>
#include<time.h>

int main()
{
    srand((time(NULL)));
    int i,sum1,sum2,diceRoll_1,diceRoll_2;
    char opt,replayChoice;
    while(1)
    {
        sum1=0;
        sum2=0;
        for(i=0;i<3;i++)
        {
            diceRoll_1=(rand()%6)+1;
            sum1+=diceRoll_1;
        }
        printf("Three dice rolled. The sum of the first role is :%d",sum1);

        for(i=0;i<3;i++)
        {
        diceRoll_2=(rand()%6)+1;
        sum2+=diceRoll_2;
        }
        printf("\nMake a guess whether the sum of the next diceroll is gonna be higher, same or lower :(H/S/L)\n");
        opt=getchar();
        opt=toupper(opt);
        printf("Three dice rolled again. The sum of the second role is :%d",sum2);

        if ((opt=='H' && sum2>sum1)||(opt=='S' && sum2==sum1)||(opt=='L' && sum2<sum1))
        {
            printf("\nYou win");
        }
        else if ((opt=='H' && ((sum2<sum1)||(sum2==sum1)))||(opt=='S' && sum2!=sum1)||(opt=='L' && ((sum2>sum1)||(sum2==sum1))))
                 {
                     printf("\nYou lose");
                 }
        else
        {
            printf("\nYou typed wrong");
        }
        char temp1=getchar();
        printf("\nDo you want to play again?(Y/N)\n");

        label:

        replayChoice=getchar();
        replayChoice=toupper(replayChoice);
        char temp2=getchar();

        if (replayChoice=='N')
            break;
        if ((replayChoice!='Y')&&(replayChoice!='N'))
        {
            printf("You typed wrong. Choose between (Y/N)\n");
            goto label;
        }
    }
    printf("Thanks for playing :)");
    return 0;

}
