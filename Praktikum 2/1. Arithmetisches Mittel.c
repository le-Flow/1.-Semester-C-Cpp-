#include <stdio.h>

int main(void)
{
	int x = 1;
	int y;
	int z;
	
	printf("Geben sie den Startwert der Summierung an:");
	
	scanf("%d", &y);
	x = y;
	
	while (x!= 0) {
		printf("Geben sie den Summand an:");
		scanf("%d", &x);
		y += x;
		z += 1;
	}
	
	printf("die Summe ist %d\n",y);
	printf("der Mittelwert ist %.2f mit %d Iterationen", (float)y/(float)z, z);
}