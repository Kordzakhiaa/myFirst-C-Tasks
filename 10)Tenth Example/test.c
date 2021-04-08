#include <stdio.h>
// გაიგეთ 3x3 მატრიცაში თითოეულ სტრიქონში მაქსიმალური რიცხვი

int main(){
    int matrix[3][3] = { 
                    { 5, 2, 9 }, 
                    { 241, 11, 123 }, 
                    { 7, 11, 9 } 
                };
    int max_r;

    for (int i = 0; i < 3; i++)
    {
        // მასივის 0-ინდექსზე მყოფი რიცხვი
        max_r = matrix[i][0];

        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
            if (matrix[i][j] > max_r)
            {
                max_r = matrix[i][j];
            }
            
        }
        printf("%d სტრიქონში მაქსიმალური რიცხვია : %d\n", i, max_r);
    }

    return 0;
}
