//Receber uma certa quantidade de numeros e monstrar a soma.
#include"stdio.h"
main()
{
	float num,soma=0;
	while(num !=0)
	{
		printf("\n\t DIGITE O NUMERO:"),scanf("%f",&num);
		soma= soma+num;
	}
	printf("\n\n\t SOMA=%.2f",soma);
	printf("\n\n\t FIM DO PROGRAMA.");
}
