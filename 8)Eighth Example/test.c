#include <stdio.h>
// მოძებნეთ მაქსიმალური მინუს ნიშნიანი რიცხვი/ციფრი მასივიდან

int main(){
    double x_array[10] = { 12, -43, -34, 1, 16, -2, -6, 18, 9, -12 };
    double negative_min = 0;
    double negative_max = 0;
    
    for (int i = 1; i < 10; i++)
    {
        if (x_array[i] < 0)
        {
            negative_min = x_array[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (x_array[i] < 0 && x_array[i] > negative_min)
        {
            negative_max = x_array[i];
        }
    }
    printf("negative max number from array = %.2f\n", negative_max);
}
