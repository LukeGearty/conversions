#include <stdio.h>
#include <ctype.h>

/*A program that converts between fahrenheit and celcius*/

int main() {
    float temp; //what will be the temperature in either unit
    char unit;  //the actual unit

    printf("Enter the unit type: Celcius (C) or Fahrenheit (F)\n");
    scanf("%c", &unit);
    unit = toupper(unit);

    //if statements to see which formula will be used

    if (unit == 'C') {
        printf("Enter the temperature in celcius:\n");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("%.1f degrees in fahrenheit", temp);

    } else if (unit == 'F') {
        printf("Enter the temperature in fahrenheit:\n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("%.1f degrees in celcius", temp);
    } else {
        printf("%c is an invalid unit", unit);
    }

    return 0;
}