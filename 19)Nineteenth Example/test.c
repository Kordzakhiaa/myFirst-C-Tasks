#include <stdio.h>

#define X_SIZE 5 
#define Z_SIZE 12

/*
გამოაცხადეთ ორი სხვადასხვა ზომის მასივი და დაწერეთ ფუნქცია, რომელიც შეავსებს ამ
მასივის ელემენტებს მნიშვნელობებით და აჩვენებს ეკრანზე. ფუნქციამ უნდა მიიღოს ორი
პარამეტრი - მასივი და მისი ზომა.
*/

int* fill_array(int array[], int size){

    for (int i = 0; i < size; i++)
    {
        array[i] = (i + 1) * i; // შევავსოთ მასივი რაიმე მნიშვნელობით
    }
    return array;
}

void* print_array(int array[], int size){
    
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]); // დავბეჭდოთ მასივი
    }
}


int main(){
    // int X_SIZE = 5;
    int x_array[X_SIZE] = { };
    int y_array[Z_SIZE] = { };

    // x_array
    fill_array(x_array, X_SIZE);
    printf("Printing x_array:\n");
    print_array(x_array, X_SIZE);

    // y_array
    fill_array(y_array, Z_SIZE);
    printf("Printing y_array:\n");
    print_array(y_array, Z_SIZE);

    return 0;
}