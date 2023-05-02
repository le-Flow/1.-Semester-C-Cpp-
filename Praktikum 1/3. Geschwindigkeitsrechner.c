#define PI 3.14
#include <stdio.h>

int main(void)
{
	float durchmesser = 0.7;
	float drehzahl1 = 10;
	float drehzahl2 = 8;
	float geschwindigkeit;
	
	geschwindigkeit = ((PI * durchmesser * drehzahl1) + (PI * durchmesser * drehzahl2))/2;
	printf("Die Geschwindigkeit betraegt %f m/s\n", geschwindigkeit);
	printf("Die Geschwindigkeit betraegt %f km/h\n", geschwindigkeit*3.6);
}