#include <stdio.h>


//This is meant to convert between the different temp scales
int main() {

    //This declares variables as well as prompts the user.
    double result;
    double temp;
    char original;
    char convert;
    printf("Enter temperature value: ");
    scanf("%lf", &temp);
    printf("Enter original scale (C, F, K): ");
    scanf(" %c", &original);
    printf("Enter scale to convert to (C, F, or K): ");
    scanf(" %c", &convert);

    //This is the entire convertion part, also checks for invalid inputs.
    if (original == 'C' && convert == 'F') {
        result = (temp * 9.0 / 5.0) + 32;
    }
    else if (original == 'C' && convert == 'K') {
        result = temp + 273.15;
    }
    else if (original == 'F' && convert == 'C') {
        result = (temp - 32) * 5.0 / 9.0;
    }
    else if (original == 'F' && convert == 'K') {
        result = (temp - 32) * 5.0 / 9.0 + 273.15;
    }
    else if (original == 'K' && convert == 'C') {
        result = temp - 273.15;
    }
    else if (original == 'K' && convert == 'F') {
        result = (temp - 273.15) * 9.0 / 5.0 + 32;
    }
    else if (original == convert) {
        result = temp;
    }
    else {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Converted temp: %.2f %c\n", result, convert);
}