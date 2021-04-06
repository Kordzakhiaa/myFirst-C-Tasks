#include <stdio.h>
// დაშალეთ ნებისმიერი ნატურალური რიცხვი ციფრების სახით
// მაგ. 3467
// გამოიტანეთ integer ტიპის 4 მნიშვნელობა: 3 4 6 7

int main(){
    int unit, number = 3467;

    while (number > 0)
    {
        int unit = number % 10;
        printf("%d\n", unit);

        number = number / 10;
    }
}
