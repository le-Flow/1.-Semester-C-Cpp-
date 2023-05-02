#include <stdio.h>
typedef enum{false, true} bool;

int main(void)
{
	bool test = false;
	
	if (test == true){
		printf("true");
	}
	if (test == false){
		printf("false");
	}
}

  