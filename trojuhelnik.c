#include <stdio.h>

void trojuhelnik(int h) {
    int pocetHvezd;
    
    for (int i = 1; i <= h; i++) {
        for (int j = i; j < h; j++) {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        
        printf("\n");
    }
}

int main() {
    trojuhelnik(3);
    printf("\n");
    trojuhelnik(5);
    printf("\n");
    trojuhelnik(7);
    
    return 0;
}