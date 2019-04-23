//
// Created by Jack Wang on 2019-04-23.
//
/*
 * Celsius Fahrenheit table
 * floating type version
 */
void celsius_to_fahr()
{
    double fahr, celsius;
    int lower, upper , step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius-Fahrenheit table\n");
    while(celsius <= upper)
    {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}