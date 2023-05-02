#include <stdio.h>
typedef enum{false, true} bool;

bool Implikation(bool A, bool B)
{
	if (A == 1 && B == 0)
    {
        return false;

    }
    return true;
}

bool Aquivalenz(bool A, bool B)
{
    if (A == B)
    {
        return true;
    }
    return false;
}

void Wahrheitstabelle()
{
    int A = 0;
    int B = 0;

    printf("Implikation \n\nA | B | i\n---------\n");
    while (A <= 1){
        while (B <= 1){
            printf("%d | %d | %d\n", A, B, Implikation(A, B));
            B++;
        }
        B = 0;
        A++;
    }

    A = 0;
    B = 0;

    printf("\nAquivalenz \n\nA | B | AE\n---------\n");
    while (A <= 1){
        while (B <= 1){
            printf("%d | %d | %d\n", A, B, Aquivalenz(A, B));
            B++;
        }
        B = 0;
        A++;
    }
}

int main(void)
{
	bool A;
	bool B;

    printf ("1 = Wahr; 0 = Nicht Wahr\n");
    printf ("Geben sie den Zustand von A und B mit der Implikation A -> B ein:\n");

	scanf("%d", &A);
	scanf("%d", &B);

    printf("Die Implikation der Folge ist %d \n", Implikation(A, B));
    printf("Die Aquivalenz der Folge ist %d \n\n\n", Aquivalenz(A, B));

    Wahrheitstabelle();
}