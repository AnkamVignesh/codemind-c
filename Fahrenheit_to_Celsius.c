#include <stdio.h>

float convertFahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    float fahrenheit;

    printf("");
    scanf("%f", &fahrenheit);

    float celsius = convertFahrenheitToCelsius(fahrenheit);

    printf("%.2f
", celsius);

    return 0;
}
