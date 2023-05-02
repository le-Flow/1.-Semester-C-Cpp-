#include <stdio.h>

int main(void)
{
	//normal variables
	printf ("Size of normal variables:\n");
	printf ("Size of char %d\n", sizeof(char));
	printf ("Size of short %d\n", sizeof(short));
	printf ("Size of int %d\n", sizeof(int));
	printf ("Size of long %d\n", sizeof(long));
	printf ("Size of float %d\n", sizeof(float));
	printf ("Size of double %d\n", sizeof(double));
	printf ("Size of long double %d\n\n", sizeof(long double));
	
	//signed variables
	printf ("Size of signed variables:\n");
	printf ("Size of signed char %d\n", sizeof(signed char));
	printf ("Size of signed short %d\n", sizeof(signed short));
	printf ("Size of signed int %d\n", sizeof(signed int));
	printf ("Size of signed long %d\n\n", sizeof(signed long));

	//unsigned variables
	printf ("Size of unsigned variables:\n");
	printf ("Size of unsigned char %d\n", sizeof(unsigned char));
	printf ("Size of unsigned short %d\n", sizeof(unsigned short));
	printf ("Size of unsigned int %d\n", sizeof(unsigned int));
	printf ("Size of unsigned long %d\n", sizeof(unsigned long));
}