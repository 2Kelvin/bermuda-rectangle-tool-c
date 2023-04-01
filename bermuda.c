#include <stdio.h>

/**
 * main - outputs only the latitude & longitude inside bermuda rectangle
 * it stores its output in the .csv gps dataa file
 * Return: 0 (Always for Success)
*/



int main(void)
{
    float latitude;
    float longitude;
    char info[80];

    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (latitude >= 26 && latitude <= 34)
        {
            if (longitude >= -76 && longitude <= -64)
                printf("%f, %f, %s\n", latitude, longitude, info);
        }
    }

    return (0);
}