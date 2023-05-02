#import <stdio.h>
typedef int bool;
#define true 1
#define false 0

int main(void)
{	
	bool test = true;

	if (test == true){
		printf("true");
	}
	if (test == false){
		printf("false");
	}
}
