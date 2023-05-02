#include<stdio.h>

int fak1(int x) 
{
	if(x > 1)
    {
		return x * fak1(x-1);
	}
    else
    {
		return 1;
	}
}

int fak2(int x)
{
	return (x > 1)?x * fak2(x-1):1;
}

int main(void) 
{
	int n;
	
	printf("Geben sie einen Fakultaet-Wert ein: ");
	scanf("%d", &n);
	
	if (n <= 0)
    {
		printf("Der Wert muss ueber 0 sein!");
		return 0;
	}
    else
    {
		printf("Variante 1:\nFakultaet von %d ist %d\n", n, fak1(n));
		printf("Variante 2:\nFakultaet von %d ist %d\n", n, fak2(n));
	}
}
