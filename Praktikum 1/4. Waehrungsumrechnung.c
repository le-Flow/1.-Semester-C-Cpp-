#include <stdio.h>

int main(void)
{
	float EUR = 1.00;
	float USD = 1.00;
	float Urk_EU = 0.99; //Umrechnungskonstante (Urk) Euro -> USD (EU)
	float Urk_UE = 1.01; //Umrechnungskonstante (Urk) USD  -> Euro (UE)
	
	//Euro in USD
	printf("EUR	USD\n");
	printf("%.2f	%.2f\n", EUR, USD*Urk_EU);
	printf("%.2f	%.2f\n", 2*EUR, 2*USD*Urk_EU);
	printf("%.2f	%.2f\n", 5*EUR, 5*USD*Urk_EU);
	printf("%.2f	%.2f\n", 10*EUR, 10*USD*Urk_EU);
	printf("%.2f	%.2f\n", 20*EUR, 20*USD*Urk_EU);
	printf("%.2f	%.2f\n", 50*EUR, 50*USD*Urk_EU);
	printf("%.2f	%.2f\n\n", 10000*EUR, 10000*USD*Urk_EU);
	
	//USD in Euro
	printf("USD	EUR\n");
	printf("%.2f	%.2f\n", USD, EUR*Urk_UE);
	printf("%.2f	%.2f\n", 2*USD, 2*EUR*Urk_UE);
	printf("%.2f	%.2f\n", 5*USD, 5*EUR*Urk_UE);
	printf("%.2f	%.2f\n", 10*USD, 10*EUR*Urk_UE);
	printf("%.2f	%.2f\n", 20*USD, 20*EUR*Urk_UE);
	printf("%.2f	%.2f\n", 50*USD, 50*EUR*Urk_UE);
	printf("%.2f	%.2f\n", 9900*USD, 9900*EUR*Urk_UE);
}