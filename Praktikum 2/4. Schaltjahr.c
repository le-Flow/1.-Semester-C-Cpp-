#include <stdio.h>
#include<time.h>
typedef enum{false, true} bool;
#define A (n % 4 == 0)
#define B (n % 100 == 0)
#define C (n % 400 == 0)


bool istSchaltjahr1(int n)
{
	if(A && !(B && !C))
    {
		return true;
	}
    else
    {
		return false;
	}
}

bool istSchaltjahr2(int n)
{
	if((C || !B) && A)
    {
		return true;
	}
    else
    {
		return false;
	}	
}

int main(void)
{
    time_t startzeit;
    time_t endzeit;
    int n = 0;
	int z = 0;
	
	//Programm 1
	time(&startzeit);
	while(n<=1000000000){
		n++;
        if (istSchaltjahr1(n) == 1){
            z++;
        }
    }

	time(&endzeit);
	printf("Es gibt %d Schaltjahre\n", z);
	printf("Das Programm 1 lief fuer %f s.\n\n", difftime(endzeit, startzeit));

	n = 0;
	z = 0;
	
	//Programm 2
	time(&startzeit);
	while(n<=1000000000){
		n++;
        if (istSchaltjahr2(n) == 1) {
            z++;
        }
    }

	time(&endzeit);
	printf("Es gibt %d Schaltjahre\n", z);
	printf("Das Programm 2 lief fuer %f s.", difftime(endzeit, startzeit));
}

