#include <stdio.h>

int main() {

    float num;
    int unit;

    printf("Enter the unit: Feet (1) or Meters(2):\n");
    scanf("%d", &unit);

    if (unit == 1) {
        printf("Enter the amount, in feet: ");
        scanf("%f", &num);
        num = num/3.28;
        printf("%.1f meters", num);
    } else if (unit == 2) {
        printf("Enter the amount, in meters: ");
        scanf("%f", &num);
        num = num * 3.28;
        printf("%.1f feet", num);
    } else {
        printf("Invalid unit %d", unit);
    }

    return 0;
}