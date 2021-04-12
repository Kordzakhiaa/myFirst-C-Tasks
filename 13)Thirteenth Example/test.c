#include <stdio.h>
// მოცემულია ორგანზომილებიანი მასივი (4X4), იპოვეთ თთეოული სვეტის უარყოფითი
// ელემენტების რაოდენობა და ჩაწერეთ ერთგანზომილებიან მასივში.

int main(){
    int x_array[4][4] = {
        { -2, -84, 41, -14 },
        { -6, -34, 15, -37 },
        { -8, -45, 11, -12 },
        { -9, -14, -21, 72 },
    };

    int my_array[0];
    int negative_nums_quantity = 0;
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (x_array[i][j] < 0)
            {
                my_array[negative_nums_quantity] = x_array[i][j];
                negative_nums_quantity += 1;
            }
            
        }
        
    }

    printf("უარყოფითი რიცხვები\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d  ", my_array[i]);
    }
    printf("\nუარყოფითი რიცხვების რაოდებონა არის %d\n", negative_nums_quantity);

    return 0;
}