#include <stdio.h>
// დავითვალოთ რამდენი არის ისეთი შემთხვევა, როდესაც მეზობელი რიცხვი/ციფრი ერთმანეთს ემთხვევა

int main(){
    int array[10] = { 1, 2, 2, 4, 4, 5 , 12, 14, 14, 14};
    int counter = 0;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] == array[i + 1])
        {
            printf("დაემთხვა -> %d\n", array[i]);
            counter++;
        }
    }
    printf("სულ მსგავსი შემთხვევები არის : %d\n ცალი", counter);
}
