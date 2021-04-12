#include <stdio.h>
// მოცემულია ორგანზომილებიანი მასივი (4X4), თუ პირველი სვეტის ელემენტების
// საშუალო მეტია მეორე სვეტის ელემენტების საშუალოზე, მაშინ შეუცვალეთ ადგილები
// პირველი სვეტის და მეორეს სვეტის ელემენტებს.

int main(){

    double my_matrix[4][4] = {
        {51, 42, 14, 55},   // i=0
        {33, 21, 41, 19},   // i=1
        {11, 32, 74, 25},   // i=2
        {91, 12, 40, 95},   // i=3
    //  j=0 j=1 j=2 j=3

    };
    double first_column_average = 0;
    double first_quantity = 0, first_sum = 0;

    double second_column_average = 0;
    double second_quantity = 0, second_sum = 0;

    //  ვპრინტავთ ძველ მატრიცას
    printf("\nძველი მატრიცა");
    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            printf("%.2f\t", my_matrix[i][j]);
        }
    }

    // ვიგებთ პირველი სვეტის საშუალოს და ვპრინტავთ
    for (int i = 0; i < 4;)
    {
        for (int j = 0; j < 4; j++)
        {
            while (i < 4)
            {
                first_sum += my_matrix[i][j];
                first_quantity += 1;
                i++;
            }
        }
    }
    first_column_average = first_sum / first_quantity;
    printf("\n\nFirst Column Average -> %.2f / %.2f = %.2f\n", first_sum, first_quantity, first_column_average);
    
    // ვიგებთ მეორე სვეტის საშუალოს და ვპრინტავთ
    for (int i = 0; i < 4;)
    {
        for (int j = 1; j < 4; j++)
        {
            while (i < 4)
            {
                second_sum += my_matrix[i][j];
                second_quantity += 1;
                i++;
            }
        }
    }
    second_column_average = second_sum / second_quantity;
    printf("\nSecond Column Average -> %.2f / %.2f = %.2f\n", second_sum, second_quantity, second_column_average);

    // ვადარებთ პირველი სვეტის საშუალოს მეორე სვეტის საშუალოს
    if (first_column_average > second_column_average)
    {
        double swap;
        for (int i = 0; i < 4; i++)
        {
            swap = my_matrix[i][0];
            my_matrix[i][0] = my_matrix[i][1];
            my_matrix[i][1] = swap;
        }
        //  ვპრინტავთ მოდიფიცირებულ ახალ მატრიცას
        printf("\nახალი მატრიცა");
        for (int i = 0; i < 4; i++)
        {
            printf("\n");
            for (int j = 0; j < 4; j++)
            {
                printf("%.2f\t", my_matrix[i][j]);
            }
        }
    printf("\n");
    }
    else{
        printf("პირველი სვეტის საშუალო არ აღმოჩნდა მეორე შვეტის საშუალოზე მეტი\n");
    }

    return 0;
}