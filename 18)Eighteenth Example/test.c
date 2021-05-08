#include <stdio.h>
// მოცემულია ცხრილი:
// ------------------------------------------------------------------------
// | სახელი გვარი | შუალედური | პრეზენტაცია | საშინაო დავალება | ფინალური |
// | ნინო         | 23        | 15          | 12               | 29       |
// | ნანა         | 20        | 25          | 10               | 28       |
// | ლიკა         | 30        | 16          | 13               | 40       |
// | მაკა         | 19        | 20          | 15               | 28       |
// ------------------------------------------------------------------------
// ცხრილის რიცხვითი მონაცემებისათვის შექმენით ორგანზომილებიანი მასივი, 
// იპოვეთ სიდიდით მესამე მაქსიმალური ქულა მთელ მონაცემებში
// და დააგინეთ ვინ მიიღო ეს ქულა და რომელ კომპონენტში?
// ეკრანზე გამოვიდეს შეტყობინება, მაგ: ნინო - ფინალური 35


int find_third_max(int array[4][4]){

    int first_max, second_max, third_max;
    first_max = second_max = third_max = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j] > first_max)
            {
                third_max = second_max;
                second_max = first_max;
                first_max = array[i][j];
            }
            else if (array[i][j] > second_max)
            {
                third_max = second_max;
                second_max = array[i][j];
            }
            else if (array[i][j] > third_max)
            {
                third_max = array[i][j];
            }
        }
        
    }
    return third_max;
}


int main(){

    int x_array[4][4] = {
        { 23, 15, 12, 29 }, // i=0 ნინო
        { 20, 25, 10, 28 }, // i=1 ნანა
        { 30, 16, 13, 40 }, // i=2 ლიკა
        { 19, 20, 15, 28 }, // i=3 მაკა
    //   j=0 j=1 j=2 j=3
    };

    char names_array[4][10] = { "Nino", "Nana", "Lika", "Maka" };

    int third_max = find_third_max(x_array);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // შუალედური
            if (third_max == x_array[i][0])
            {
                printf("%s - შუალედური %d ქულა\n", names_array[i], x_array[i][0]);
                break;
            }

            // პრეზენტაცია
            else if (third_max == x_array[i][1])
            {
                printf("%s - პრეზენტაცია %d ქულა\n", names_array[i], x_array[i][1]);
                break;
            }

            // დავალება
            else if (third_max == x_array[i][2])
            {
                printf("%s - დავალება %d ქულა\n", names_array[i], x_array[i][2]);
                break;
            }
            
            // ფინალური
            else if (third_max == x_array[i][3])
            {
                printf("%s - ფინალური %d ქულა\n", names_array[i], x_array[i][3]);
                break;
            }
        }
   
    }

    return 0;
}
