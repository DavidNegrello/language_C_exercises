//Dato N un numero intero positivo, generare e visualizzare in ordine crescente i numeri pari minori o uguali a N.
#include <stdio.h>

int main(int argc, char *argv[])
{

	int valore=0; 
	int num; 

	do
	{										   
		printf("Inserisci un numero"); 
		scanf("%d", &num);					   
	} while (num < 0);						   
	do
	{									   
		printf("i valori sono: %d\n", valore); 
		valore = valore +2;						   
	} while (valore <= num);					  

	return 0; 
}