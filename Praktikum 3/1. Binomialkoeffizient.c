#include <stdio.h>

int fac(int x) 
{
	return (x > 1)?x * fac(x-1):1;
}

int main(void)
{
	int n; 
	int k;

	printf("(n/k)\nGeben sie eine Zahl fuer n an:");
	scanf("%d", &n);
	printf("Geben sie eine Zahl fuer k an:");
	scanf("%d", &k);

	if (n<k || n <= 0 || k <= 0)
    {
		printf("die Eingabe ist nicht Korrekt.\nBeachten sie das n und k ueber 0 sind und das n>k sein muss!");
	}
    else
    {
		printf("die Loesung ist: %d", (fac(n))/(fac(k)*fac(n-k)));
	}
}

//rekursiv!!