#include <stdio.h>
// მოცემულია ერთგანზომილებიანი მასივი. იპოვეთ მასივის იმ ელემენტების ჯამი,
// რომელიც მოთავსებულია იმ ელემენტებს შორის, რომელთა მნიშნელობები 0-ია
// (პირველ ნულებს შორის).
// მაგ. 3 5 0 4 6 7 0 9
// უნდა იპოვოს 4+6+7
// 3 0 4 5 0 5 8 0
// უნდა იპოვოს 4+5

int main(){
    //index                    2           6
    int my_array[10] = { 3, 5, 0, 4, 6, 7, 0, 0, 1, 0};

    int numbers = 0, index1, index2, sum = 0; 

    // ვინახავთ პირველ შემხვედრ ინდექს(index1-ცვლადში) რომელიც უდრის ნულს
    for (int i = 0; i < 10; i++)
    {
        if (my_array[i] == 0)
        {
            index1 = i;
            break;
        }
    }
    // ვინახავთ მეორე შემხვედრ ინდექს(index2-ცვლადში) რომელიც უდრის ნულს
    for (int i = index1 + 1; i < 10; i++)
        {
            if (my_array[i] == 0)
        {
            index2 = i;
            break;
        }
        }
    
    printf("პირველი : %d\n", index1);
    printf("მეორე : %d\n", index2);

    // გამოვიანგარიშებთ ჯამს
    for (int i = index1; i < 10;)
    {
        while (i != index2)
        {
            sum += my_array[i];
            // printf("%d\n", sum);
            i++;
        }
        break;
    }
    printf("ინდექს %d და ინდექს %d-შორის მოთავსებულ რიცხვთა ჯამი = %d\n", index1, index2, sum);

    return 0;
}