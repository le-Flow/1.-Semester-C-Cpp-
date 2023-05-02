#include<stdio.h>

int fak1(int x) 
{
	int y = 0;
	int z = 1;
	
	while (y < x)
    {
		y++;
		z = z * y;
	}
    return z;
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
		printf("Fakultaet von %d ist %d\n", n, fak1(n));
	}
}

