#include <stdio.h>

int main(void){
    int eingabe1, eingabe2, summe;

    printf("Geben sie Zahlen sum addieren ein:\n    0 + ");
    scanf(" %d", &eingabe1);
    printf(" = %d + ", eingabe1);
    scanf(" %d", &eingabe2);
    summe = eingabe1 + eingabe2;

    for(int i = 0; i != 1; i){
        printf(" = %d +", summe);
        scanf(" %d", &eingabe2);
        summe = summe + eingabe2;
    }
}