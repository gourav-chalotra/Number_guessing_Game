#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char User_want, random_num;
    printf("<<<< ----Your Want to play ?---- >>>>\n IF YES PRESS (y) OR IF NOT WANT THEN PRESS  (n)");
    scanf("%c", &User_want);
    srand(time(0));
    random_num = rand() % 100 + 1;
    if (User_want == 'y')
    {
        int i = 2, player, scoure = 0;
        while (i > 1)
        {

            printf(" Guess number between 1 to 100 \n");
            scanf("%d", &player);

            if (player > random_num)
            {
                printf("Enter Lower value please ! \n");
                scoure++;
            }

            if (player < random_num)

            {
                printf("Enter the Higher Number \n");
                scoure++;
            }

            if (player == random_num)
            {
                printf("You guess in %d Attemts !\n", scoure);
                i = 3;
            }
        }
    }
    if (User_want == 'n')
    {
        printf("\n\n\t!OK---WE---PLAY---LATER---HAVE---A---GREAT---DAY-----;)\n\n\n\n");
    }

    return 0;
}