#include"stdio.h"
#include"locale.h"
#include"math.h"
#include"stdlib.h"
main()
{
	setlocale(LC_ALL,"");char OP;
	system("Color 1D");
	printf("\n\t\t\t\t*************");
	printf("\n\t\t\t\t*CALCULADORA*");
	printf("\n\t\t\t\t*************");
	printf("\n DIGITE 1 PARA SOMA:");
	printf("\n DIGITE 2 PARA SUBTRA��O:");
	printf("\n DIGITE 3 PARA DIVIDIS�O:");
	printf("\n DIGITE 4 PARA MULTIPLICA��O:");
	printf("\n DIGITE 5 PARA PONT�NCIA:");
	printf("\n DIGITE 6 PARA RAIZ:");
	printf("\n ESCOLHA UMA DAS OP��ES:"),scanf("%s",&OP);
	switch(OP)
	{
		case '1':
		{
			float A,B;
			system("Color 2D");
			printf("\n********************");
			printf("\n*VOC� ESCOLHEU SOMA*");
			printf("\n********************");
			printf("\nINSIRA OS NUMEROS:"), scanf("%f%f",&A,&B);
			printf("\n SOMA= %.2f",A+B);
			break;
			
			
		}
		case '2':
			{
				float A,B;
				system("Color 3D");
				printf("\n*************************");
				printf("\n*VOC� ESCOLHEU SUBTRA��O*");
				printf("\n*************************");
				printf("\nINSIRA OS NUMEROS:"),scanf("%f%f",&A,&B);
				printf("\nSUBTRA��O= %.2f",A-B);
				break;
			}
		case '3':
			{
				float A,B;
				system("Color 4D");
				printf("\n***********************");
				printf("\n*VOC� ESCOLHEU DIVIS�O*");
				printf("\n***********************");
				printf("\nINSIRA OS NUMEROS:"),scanf("%f%f",&A,&B);
				printf("\nDIVIS�O= %.2f",A/B);
				break;
				
			}
		case '4':
			{
				float A,B;
				system("Color 2D");
				printf("\n*****************************");
				printf("\n*VOC� ESCOLHEU MULTIPLICA��O*");
				printf("\n*****************************");
				printf("\nINSIRA OS NUMERO:"),scanf("%f%f",&A,&B);
				printf("\nMULTIPLICA��O= %.2f",A*B);
				break;
			}
		case '5':
			{
				float A,B;
				system("Color 5D");
				printf("\n************************");
				printf("\n*VOC� ESCOLHEU POT�NCIA*");
				printf("\n************************");
				printf("\nINSIRA OS NUMEROS:"),scanf("%f%f",&A,&B);
				printf("\nPOT�NCIA= %.2f",pow(A,B));
				break;
			}
		case '6':
			{
				float X;
				system("Color 6D");
				printf("\n********************");
				printf("\n*VOC� ESCOLHEU RAIZ*");
				printf("\n********************");
				printf("\nINSIRA O NUMERO:"),scanf("%f",&X);
				printf("\nRAIZ= %.2f", sqrt(X));
				break;
			}
	}
	
}

