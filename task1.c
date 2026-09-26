#include <stdio.h>

//All combos that could be made from user input
void combos(int num) {
    int i, j, k, l, m;
    for (int i = 0; i <= num / 2; i++) {
        for (int j = 0; j <= num / 6; j++) {
            for (int k = 0; k <= num / 3; k++) {
                for (int l = 0; l <= num / 2; l++) {
                    for (int m = 0; m <= num / 1; m++) {
                        if ((i * 8 + j * 7 + k * 6 + l * 3 + m * 2) == num) {
                            printf("%d TD + 2pt, %d TD + FG, %d 3pt FG, %d Safety\n", i, j, k, l, m);
                        }
                    }
                }
            }
        }
    }

int main() {

    int num;
    printf("Enter the NFL score (Enter 1 to stop): \n");
    scanf("%d", &num);
    combos(num);
    return 0;

}