#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
დაწერეთ თამაში, რომელშიც კამათლის სროლა იმიტირებულია კომპიუტერისა და
მომხმარებლის მიერ. თამაშში არის 2 კამათელი და თითოეულ მათგანს შეუძლია 1-დან 6
ქულის გამოტანა. პროგრამის მიერ გადაწყდეს ვინ იწყებს თამაშს - კომპიუტერი თუ
მომხარებელი. თითოეული ისვრის ოთხჯერ . ეკრანზე აჩვენეთ სიმბოლოებით დახატული
კამათელი და ქულების ჯამური რაოდენობა. პირველი სროლის შემდეგ აჩვენეთ
შუალედური შედეგი - მოთამაშისა და კომპიუტერის მიერ მიღებული ქულების რაოდენობა.
დასასრულს, აცნობეთ ვინ მოიგო ყველა სროლის საფუძველზე.
კამათელი ეკრანზე გამოიტანეთ დაახლოებით ასეთი სახით:
1- იანი
---------
|       |
|   *   |
|       |
---------
3-იანი
---------
| *     |
|   *   |
|     * |
---------
*/


// function that prints one score in dice style
void print_one()
{
    printf("1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
            {
                printf("(*)\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
    printf("--------------------\n");
}

// function that prints two score in dice style
void print_two()
{
    printf("2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i == 0 && j == 0) || (i == 2 && j == 2))
            {
                printf("(*)\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
    printf("--------------------\n");
}

// function that prints three score in dice style
void print_three()
{
    printf("3\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2))
            {
                printf("(*)\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n\n");
    }
    printf("--------------------\n");
}

// function that prints four score in dice style
void print_four()
{
    printf("4\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 2) || (i == 2 && j == 0) || (i == 2 && j == 2))
            {
                printf("(*)\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n\n");
    }
    printf("--------------------\n");
}

// function that prints five score in dice style
void print_five()
{
    printf("5\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 2) || (i == 1 && j == 1) || (i == 2 && j == 0) || (i == 2 && j == 2))
            {
                printf("(*)\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n\n");
    }
    printf("--------------------\n");
}

// function that prints six score in dice style
void print_six()
{
    printf("6 \n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 1) || (i == 0 && j == 2) || (i == 2 && j == 0) || (i == 2 && j == 1) || (i == 2 && j == 2))
            {
                printf("(*)\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
    printf("--------------------\n");
}


int rolling_dice(){
    int result = 0 + rand() % 7;

    if (result == 1)
    {
        print_one();
    }
    else if (result == 2)
    {
        print_two();
    }
    else if (result == 3)
    {
        print_three();
    }
    else if (result == 4)
    {
        print_four();
    }
    else if (result == 5)
    {
        print_five();
    }
    else if (result == 6)
    {
        print_six();
    }
    

    return result;
}

void computer_starts(){
    int computer_dice = 0, player_dice = 0;
    int counter = 1;

    while (counter != 9)
    {
        if (counter % 2 == 0)
        {
            printf("Player: ");
            player_dice += rolling_dice();            
        }
        else{
            printf("Computer: ");
            computer_dice += rolling_dice();
        }
        
        counter++;
    }
    printf("Player : %d\n", player_dice);
    printf("Computer : %d\n", computer_dice);

    if (player_dice > computer_dice)
    {
        printf("\nPlayer Wins The Game!\n");
    }
    else if (computer_dice > player_dice)
    {
        printf("\nComputer Wins The Game!\n");
    }
}


void player_starts(){
    int computer_dice = 0, player_dice = 0;
    int counter = 1;

    while (counter != 9)
    {
        if (counter % 2 == 0)
        {
            printf("Computer: ");
            computer_dice += rolling_dice();
            
        }
        else{
            printf("Player: ");
            player_dice += rolling_dice();
        }
        
        counter++;
    }

    printf("Player : %d\n", player_dice);
    printf("Computer : %d\n", computer_dice);

    if (player_dice > computer_dice)
    {
        printf("\nPlayer Wins The Game!\n");
    }
    else if (computer_dice > player_dice)
    {
        printf("\nComputer Wins The Game!\n");
    }
    
}

void start_game(){
    char user_input[10];

    printf("\n    <<< Hello this is dice game >>>\n\n");
    printf("Who will start, [C]omputer or [P]layer?\n");
    scanf("%s", user_input);

    if (strcmp(user_input, "C") == 0 || strcmp(user_input, "c") == 0 || strcmp(user_input, "Computer") == 0 || strcmp(user_input, "computer") == 0)
    {
        printf("Computer starts the game!\n\n");
        computer_starts();
    }
    else if (strcmp(user_input, "P") == 0 || strcmp(user_input, "p") == 0 || strcmp(user_input, "Player") == 0 || strcmp(user_input, "player") == 0)
    {
        printf("Player starts the game!\n\n");
        player_starts();
    }
    else{
        printf("Invalid input, Please input valid character\n");
    }
}

int main()
{
    start_game();

    return 0;
}
