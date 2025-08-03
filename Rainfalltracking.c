/*Rainfall Tracking 
write a programme to track rainfall data for three cities for 4 days using 2d array
Name: Pranay Shahare(B24CE1106)
*/
#include <stdio.h>

int main() {
    float rainfall[3][4];
    float total, avg;

    printf("Enter rainfall for three cities\n");

    for (int c = 0; c < 3; c++) {
        printf("City: %d\n", c + 1);
        for (int m = 0; m < 4; m++) {
            printf("Month: %d\n", m + 1);
            scanf("%f", &rainfall[c][m]);
        }
    }

    // Output in your desired format
    printf("Rainfall Tracking");
    printf("\n sr_no\t\tcity name\t\tm1\t\tm2\t\t\tm3\t\t\tm4\t\t\tavgRainfall");

    for (int c = 0; c < 3; c++) {
        total = 0;
        printf("\n%d\t\tcity %d", c + 1, c + 1);
        for (int m = 0; m < 4; m++) {
            printf("\t\t%f", rainfall[c][m]);
            total += rainfall[c][m];
        }
        avg = total / 4;
        printf("\t\t%f", avg);
    }

    return 0;
}
