#include <stdio.h>
// A და B უნივერსიტეტებმა გადაწყვიტეს მოაწყონ შეჯიბრი პროგრამირებაში.
// თითოეულმა უნივერსიტეტმა შეჯიბრზე გამოიყვანა 10 სტუდენტი, რომელთა
// ნამუშევრები შეფასდა ქულებით 0-დან 100-მდე. უნივერსიტეტის საბოლოო
// შედეგად ითვლება 10 მონაწილიდან საუკეთესო 3-ის შედეგი. დაწერეთ
// პროგრამა, რომელიც გამოითვლის საბოლოო შედეგს თითოეული
// უნივერსიტეტისათვის.
// შესატანი მონაცემები: პირველ 10 სტრიქონში - A უნივერსიტეტის
// სტუდენტთა შედეგები. მომდევნო 10 სტრიქონში - B უნივერსიტეტის
// სტუდენტთა შედეგები.
// გამოსატანი მონაცემები: ერთადერთ სტრიქონში ორი მთელი რიცხვი - ჯერ A
// უნივერსიტეტის შედეგი, შემდეგ B უნივერსიტეტის შედეგი.
// შესატანი მონაცემები: [23] 23 [20] [15] 15 14 13 9 7 6 | [25] [19] [17] 17 16 13 12 11 9 5
// გამოსატანი მონაცემები: 66 61

int main(){
    int array[2][10] = {
        { 50, 70, 65, 32, 41, 34, 91, 12, 56, 58 }, //i=0
        { 54, 42, 51, 89, 71, 22, 24, 65, 86, 63 }, //i=1
    //   j=0 j=1 j=2 j=3 j=4 j=5 j=6 j=7 j=8  j=9
    };

    int university_A[10];
    int university_B[10];
    int counter = 0, counter1 = 0;;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            university_A[counter] = array[0][j];
            counter++;
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            university_B[counter1] = array[1][j];
            counter1++;
        }
    }

    int first_A = 0, second_A = 0, third_A = 0;
    int first_B = 0, second_B = 0, third_B = 0;

    for (int i = 0; i < 10 ; i ++) 
    { 
        if (university_A[i] > first_A) 
        { 
            third_A = second_A; 
            second_A = first_A; 
            first_A = university_A[i]; 
        }
        else if (university_A[i] > second_A) 
        { 
            third_A = second_A; 
            second_A = university_A[i]; 
        } 
        else if (university_A[i] > third_A)
        { 
            third_A = university_A[i];
        }
    }
    for (int i = 0; i < 10 ; i ++) 
    { 
        if (university_B[i] > first_B) 
        { 
            third_B = second_B; 
            second_B = first_B; 
            first_B = university_B[i]; 
        }
        else if (university_B[i] > second_B) 
        { 
            third_B = second_B; 
            second_B = university_B[i]; 
        } 
        else if (university_B[i] > third_B)
        { 
            third_B = university_B[i];
        }
    }
    int sum_A = first_A + second_A + third_A;
    int sum_B = first_B + second_B + third_B;

    printf("სამი ყველაზე მაღალი ქულა A-უნივერსიტეტიდან არის 1)%d 2)%d 3)%d\n", first_A, second_A, third_A);
    printf("სამი ყველაზე მაღალი ქულა B-უნივერსიტეტიდან არის 1)%d 2)%d 3)%d\n", first_B, second_B, third_B);

    printf("University_A : %d + %d + %d = %d\n", first_A, second_A, third_A, sum_A);
    printf("University_B : %d + %d + %d = %d\n", first_B, second_B, third_B, sum_B);

    return 0;
}