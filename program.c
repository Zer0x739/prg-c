#include <stdio.h>
#include <stdlib.h>
#define sirka 5 //zde zadate sirku pole
#define vyska 8 //zde zadate vysku pole

//Tento program vyrvari pole z nul. Program obsahuje promennou a cyklus, ktery zacina na radku 14. 
int main()
{ 
    int pole[vyska][sirka];
    int d, j;
    for (j = 0; j < vyska; j++)
    for (d = 0; d < sirka; d++)
        pole[j][d] = 0;
    for (j = 0; j < vyska; j++)
    {
        for (d = 0; d < sirka; d++)
        printf("%d ", pole[j][d]);
        printf("\n");
    }
return 0;
}
