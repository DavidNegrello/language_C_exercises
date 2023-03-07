//Dato N un numero intero positivo, generare e visualizzare il numero successivo
#include <stdio.h>
int main(int argc, char *argv[])
{

	int numero, somma; 

	do
	{									   
		printf("inserisci un numero: \n"); 
		scanf("%d", &numero);
	} while (numero <= 0);					  

	somma = numero + 1;
	printf("il successivo vale: %d\n\n", somma); 

	return 0; 
}