#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// ანაბარი ბანკში არის x ლარი. იგი ყოველ წლიურად იზრდება p პროცენტით, 
// რის შედეგაც წინადი ნაწილის (თეთრები) უგულებელყოფა ხდება (უქმდება).
// განსაზღვრეთ რამდენი წლის შემდეგ იქნება ანაბარზე მინიმუმ y ლარი.

// შეტანა: სამი რიცხვი: x, p, y (თითო სტრიქონზე თითო რიცხვი)

int main(){
    float x, p, y;

    printf("x = ");
    scanf("%f", &x);
    printf("p = ");
    scanf("%f", &p);
    printf("y = ");
    scanf("%f", &y);
    
    // x = 120;
    // p = 15;
    // y = 300;
    
    int counter = 0;

    while (x < 300)
    {
        x += x * p / 100;
        x = floor(x);
    
        counter++;
    }
    
    printf("%d-წლის შემდეგ იქნება %.2f-ლარი\n", counter, x);

    return 0;
}
