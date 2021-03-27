#include <stdio.h>

int main() {

    int height, mass, gender;

	printf("Input your height : ");
	scanf("%d", &height);
	printf("Input your mass : ");
	scanf("%d", &mass);
	printf("Input your gender [male=0/famale=1]: ");
	scanf("%d", &gender);

	if (gender == 0){
		if (mass == (height-100)){
			printf("Your mass is excelent!");
		} 
        else if (mass < (height - 100)){
			printf("\nYou have to increase your mass with %d kg\n", height-100-mass);
		} 
        else {
			printf("\nYou have to decrease your mass with %d kg\n", mass-(height-100));
		}
	}
	else if (gender == 1) {

		if (mass == (height-110)){
            printf("Your mass is excelent!");    
        } 
        else if (mass < (height - 110)){
			printf("\nYou have to increase your mass with %d kg\n", height-110-mass);
		} 
        else {
			printf("\nYou have to decrease your mass with %d kg\n", mass-(height-110));
		}
    }

	return 0;
}