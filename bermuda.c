#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - read data fom GPS file & write it to 3 custom created data-stream files
 * Return: 0 (Always for Success)
*/

int main(void)
{
    char line[80];

    FILE *in = fopen("spooky.csv", "r");
    FILE *file1 = fopen("ufos.csv", "w");
    FILE *file2 = fopen("disappearances.csv", "w");
    FILE *file3 = fopen("others.csv", "w");

    while (fscanf(in, "%79[^\n]\n", line) == 1)
    {
        if (strstr(line, "UFO"))
            fprintf(file1, "%s\n", line);
        else if (strsrt(line, "Disappearance"))
            fprintf(file2, "%s\n", line);
        else
            fprintf(file3, "%s\n", line);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return (0);
}