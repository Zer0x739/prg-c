#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
int pole [5];
int soucet = 0;
int i;

srand(time(0));

for (i = 0; i < 5; i++)
{
    pole [i] = rand() % 50 + 1;
}

int max = pole [0];
int min = pole [0];
int prumer;
int prumer2;

for (i = 0;i < 5;i++)
{
    printf ("pole [%d] = %d\n", i, pole[i]);
}

for (i = 0; i < 5; i++)
{
    if (max < pole [i])
        max = pole [i];
    if (min > pole [i])
        min = pole [i];
        soucet += pole [i];
}
    printf ("\n\n\nmaximum = %d", max);
    printf ("\nsoucet = %d", soucet);
    printf ("\nprumer = %.2f", soucet / (float) 5);
    printf ("\nprumer bez max a min hodnoty = %.2f", (soucet - min - max) / (float) 8);

    return 0;
}