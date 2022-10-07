#include <stdio.h>

int main() {
    const float kelvinsInZeroCelsius = 273.15;
    float temperatureCelsius = 0;
    printf("Enter temperature in Celsius degrees: ");
    scanf("%f", &temperatureCelsius);
    printf("%f degrees Farenheit\n", temperatureCelsius * 9/5 + 32);
    printf("%f Kelvins\n", temperatureCelsius + kelvinsInZeroCelsius);
    return 0;
}
