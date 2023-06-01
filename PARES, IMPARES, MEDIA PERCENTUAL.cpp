#include"stdio.h"
#include"stdlib.h"
main()
{	
	int num[10],i;
	float sp=0,si=0,contp=0,conti=0;
	for(i=1;i<=10;i++);
	{
		printf("\n INFORME OS NUMEROS:",i);
		scanf("%d",&num[i]);
		if(num[i] % 2 ==0)
		{
			sp=sp+num[i];contp++;
			
		}
		else
		{
			si=si+num[i];conti++;
			
		}
	}
		system("cls");
		printf("\n\n ESTATISTICAS");
		printf("\n QUANTIDE DE PARES:%.2f",contp);
		printf("\n SOMA DOS PARES:%.2f",sp );
		printf("\n PERCENTUAL DE PARES:%.2f%%",(contp*100/contp+conti));
		printf("\n QUANTIDADE DE IMPARES:%.2f",conti);
		printf("\n SOMA DOS IMPARES:%.2f",si);
		printf("\n PERCENTUAL DE IMPARES:%.2f%%",(conti*100/contp+conti));
		
}
