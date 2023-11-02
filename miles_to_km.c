#include <stdio.h>

/*A program that will convert miles to meters and vice versa*/
int main() {
    float num;
    int unit;
    printf("Enter the unit: Miles (1) or Kilometers (2)\n");
    scanf("%d", &unit);
    if (unit == 1) {
        printf("Enter the distance in miles:\n");
        scanf("%f", &num);
        num = num * 1.609;
        printf("%.2f km", num);
    } else if (unit == 2) {
        printf("Enter the distance in kilometers:\n");
        scanf("%f", &num);
        num = num * 0.62137;
        printf("%.2f miles", num);
    } else {
        printf("Invalid unit");
    }

    return 0;
}