#include"stdio.h"
main()
{
	float num[5],soma=0;int i;
	for (i=1;i<=5;i++)
	{
		printf("\n INFORME O NUMERO:");
		scanf("%f",&num[i]);
		soma=soma+num[i];
		
	}
	printf("\n soma=%.2f", soma);
	printf("\n media=%.2f", soma/5);
}
