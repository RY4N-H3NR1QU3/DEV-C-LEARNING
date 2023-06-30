long int fatrec(int n)
{
	if((n==0)||(n==1))
	return (1);
	else 
	return(n*fatrec(n-1));
}
#include"stdio.h"
#include"stdlib.h"

main()
{
	int x,result;char op;
	do
	{
		printf("\n DIGITE O NUMERO A SER FATORADO: "),scanf("%d",&x);
		result=fatrec(x);
		printf("\n O FATORIAL DE %d e = %d\n",x,result);
		printf("\n PARA CONTINUAR DIGITE 's', FIM OUTRA LETRA:"),scanf("%s",&op);
		system("cls");
		
	}while(op=='s');
	printf("\n\t\t\t\t\t\t*****************");
	printf("\n\t\t\t\t\t\t*FIM DO PROGRAMA*");
	printf("\n\t\t\t\t\t\t*****************");
}

