//convert temperature from celcius to farenheit using formula
#include <stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Celsius: %.2f\n", celsius);
    return 0;
}