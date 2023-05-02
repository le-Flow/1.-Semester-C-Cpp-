#include <stdio.h>
typedef enum {false, true} bool;
#define MAX 9999

bool is_in(int x, int f[MAX] ,int *index) {
    if (x <= MAX) {
        for (int i = 0; i < MAX; i++) {
            if (f[i] == x) {
                *index = i;
                return true;
            }
        }
    }
    return false;
}

int main(void){
    int x;
    int index;
    printf("Geben Sie eine Zahl ein:\n");
    scanf("%d", &x);
    int f[99999];
    f[x] = x;

    if (!is_in(x, f, &index)) {
        printf("Die Zahl %d ist nicht im Feld f.", x);
    } else {
        printf("Die Zahl %d ist im Feld f an der Stelle %d.", x, index);
    }
}