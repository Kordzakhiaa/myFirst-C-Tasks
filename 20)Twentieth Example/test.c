#include <stdio.h>
#include <stdlib.h>

#define SIZE_I 5
#define SIZE_J 5

/*
აუცილებელია შექმნათ ორგანზომილებიანი მასივი 5 x 5. შემდეგ დაწერეთ ფუნქცია,
რომელიც შეავსებს მას შემთხვევითი რიცხვებით 30 – დან 60 – მდე. შექმენით კიდევ ორი
ფუნქცია, რომლითაც იპოვით ამ ორგანზომილებიანი მასივის მაქსიმალურ და მინიმალურ
ელემენტებს.
*/

int print_array(int array[SIZE_I][SIZE_J], int size_i, int size_j){

    for (int i = 0; i < size_i; i++)
    {
        printf("\n");
        for (int j = 0; j < size_j; j++)
        {
            printf("%d\t", array[i][j]);
        }
    }
    printf("\n");
}


void max_element(int array[SIZE_I][SIZE_J], int size_i, int size_j){
    int max = array[0][0];

    for (int i = 0; i < size_i; i++)
    {
        for (int j = 0; j < size_j; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
    }
    printf("%d\n", max);
}


void min_element(int array[SIZE_I][SIZE_J], int size_i, int size_j){
    int min = array[0][0];

    for (int i = 0; i < size_i; i++)
    {
        for (int j = 0; j < size_j; j++)
        {
            if (array[i][j] < min)
            {
                min = array[i][j];
            }
        }
    }
    printf("%d\n", min);
}

int fill_array_with_random_nums(int array[SIZE_I][SIZE_J], int size_i, int size_j){

    for (int i = 0; i < size_i; i++)
    {
        for (int j = 0; j < size_j; j++)
        {
            array[i][j] = 30 + rand()%31;
        }
        
    }
    
}


int main(){

    int array[5][5];

    fill_array_with_random_nums(array, SIZE_I, SIZE_J);

    printf("\nPrint an array filled with random numbers\n");
    printf("----------------------------------");
    print_array(array, SIZE_I, SIZE_J);
    printf("----------------------------------\n");

    // print max
    printf("\nMax number from array is: ");
    max_element(array, SIZE_I, SIZE_J);

    // print min
    printf("Min number from array is: ");
    min_element(array, SIZE_I, SIZE_J);

    return 0;
}