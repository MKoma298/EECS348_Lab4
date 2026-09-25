#include <stdio.h>


//Function to get user num and store it
void getNum() {

    int num;
    printf("Enter the NFL score (Enter 1 to stop): \n");
    scanf("%d", &num);

}



int main() {

    do {
        getNum();
    } while (num =! 1)

}