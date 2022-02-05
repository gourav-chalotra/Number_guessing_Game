while (i >1)
    {
        srand(time(0));
        random_num = rand()%100+1;

    printf(" Guess number between 1 to 100 \n");
    scanf("%d", &player);

        if (player > random_num)
        {
            printf("lower number please!\n ");
            scoure++;
        }

        if (player < random_num)
        {
            printf("Higher Number please!\n");
            scoure++;
        }

        if(player == random_num)
        {
            printf("Your total Guesses is %d", scoure);
            break;
        }
    }
    

    if(User_want=='n')
        {
        printf("!OK---WE---PLAY---LATER---HAVE---A---GREAT---DAY-----;)\n");
        }