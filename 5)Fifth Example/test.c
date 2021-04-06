#include <stdio.h>
// შემოსული რიცხვიდან ციფრების რაოდენობის დათვლა

int main(){
    int number, counter = 0;

    printf("Hello, this program can count quantity of digits in number\n");
    printf("Please input some integer:\n");
    scanf("%d", &number);

    while (number != 0)
    {
        number = number / 10;
        counter++;
    }
    printf("The quantity of digits are %d\n", counter);
    
}
