/* Temperature Tracking:
Write a programme to track raainfall data of three cities over 4 months.
using 2d array
Name:Pranay Shahare(B24CE1106)
*/

#include <stdio.h>

int main() {
    float temperature[3][7];  
    float total, avg;

   
    printf("Enter daily temperature (in Celsius) for 3 cities over 7 days:\n");

    for (int city = 0; city < 3; city++) {
        printf("\nCity %d:\n", city + 1);
        for (int day = 0; day < 7; day++) {
            printf(" Day %d: ", day + 1);
            scanf("%f", &temperature[city][day]);
        }
    }

    printf("\n\nTEMPERATURE TRACKER\n");
    printf("Sr_No\tCity Name\t");

   
    for (int day = 0; day < 7; day++) {
        printf("Day%d\t", day + 1);
    }
    printf("AvgTemp (in degree celsius)\n");

   
    for (int city = 0; city < 3; city++) {
        total = 0;
        printf("%d\tCity %d\t\t", city + 1, city + 1);
        for (int day = 0; day < 7; day++) {
            printf("%.1f\t", temperature[city][day]);
            total += temperature[city][day];
        }
        avg = total / 7;
        printf("%.2f\n", avg);
    }

    return 0;
}
