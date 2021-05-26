#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
NXN (3<=N<=100) ზომის დაფაზე, რომელიც საჭადრაკო დაფის ანალოგიურადაა დაყოფილი შავ და თეთრ უჯრედებად, ყოველ
უჯრედში ჩაწერილია ორნიშნა რიცხვი. იპოვეთ შავ უჯრედებში ჩაწერილი რიცხვების ჯამი, თუკი დაფის ზედა მარცხენა უჯრედი
თეთრია.
*/


void print_array(int array[][4]);
void print_answer(int array[][4]);

int main()
{
    int array[4][4] = {
        { 11, 22, 33, 44 }, // i = 0
        { 15, 26, 97, 48 }, // i = 1
        { 92, 10, 11, 12 }, // i = 2
        { 13, 14, 15, 16 }, // i = 3
       // j=0 j=1 j=2 j=3
    };
    
    int sum = 0;

    print_answer(array);

    return 0;
}

void print_array(int array[][4]){

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", array[i][j]);
        }
        
    }
    printf("\n");
}


void print_answer(int array[][4]){
    print_array(array);

    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            if (i % 2 == 0 && j % 2 == 1)
            {
                printf("%d\t", array[i][j]);
                sum+=array[i][j];
            }
            if (i % 2 == 1 && j % 2 == 0)
            {
                printf("%d\t", array[i][j]);
                sum+=array[i][j];
            }
        }
    }
    printf("\n\nSum: %d\n", sum);
}