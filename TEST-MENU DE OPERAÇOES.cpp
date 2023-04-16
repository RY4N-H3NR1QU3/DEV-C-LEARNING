#include"stdio.h"
#include"math.h"
#include"locale.h"
#define pi 3.14
#define RED "\x1b[31m"
#define BLUB "\e[44m"
#define WHT "\e[0;37m"
#define MAGEN "\e[0;35m"
#define CYAN "\e[0;36m"
main() 
{
	
	setlocale(LC_ALL,"");char op;
	printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
	printf(RED BLUB"\n\t\t\t\t\t\t*SELECIONE A OPERAÇÃO DESEJADA*");
	printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
	printf(WHT"\n\nDIGITE 1 PARA ACESSAR A CALCULADORA");
	printf("\nDIGITE 2 PARA ACESSAR A EQUAÇÃO DO 2º");
	printf("\nDIGITE 3 PARA ACESSAR MEDIA DE NOTAS");
	printf("\nDIGITE 4 PARA ACESSAR GEOMETRIA PLANA");
	printf(WHT"\n\nSELECIONE UMA DAS OPÇÕES: "),scanf("%d",&op);
	if ((op==1))
	{
		
		if(op==1)
		printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
		printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU A CALCULADORA*");
		printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
		printf(WHT"\nDIGITE 1 PARA SOMAR");
		printf("\nDIGITE 2 PARA SUBTRAÇÃO");
		printf("\nDIGITE 3 PARA MULTIPLICAÇÃO");
		printf("\nDIGITE 4 PARA DIVISÃO");
		printf("\nDIGITE 5 PARA POTÊNCIA");
		printf("\nDIGITE 6 PARA RAÍZ");
		printf("\n\nESCOLHA: "),scanf("%d",&op);
		if((op==1)or(op==2)or(op==3)or(op==4)or(op==5)or(op==6))
		{
			if(op==1)
			{
				float X,Y;
				printf(RED BLUB"\n\t\t\t\t\t\t**********************");
				printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU SOMA*");
				printf(RED BLUB"\n\t\t\t\t\t\t**********************");
				printf(WHT"\n\nINSIRA OS NUMEROS: ");scanf("%f%f",&X,&Y);
				printf("\n\nRESULTADO DA SOMA= %.2f", X + Y);
			}
			else
				if(op==2)
				{
					float X,Y;
					printf(RED BLUB"\n\t\t\t\t\t\t***************************");
					printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU SUBTRAÇÃO*");
					printf(RED BLUB"\n\t\t\t\t\t\t***************************");
					printf(WHT"\n\nINSIRA OS NUMEROS: ");scanf("%f%f",&X,&Y);
					printf("\n\nRESULTADO DA SUBTRAÇÃO= %.2f", X - Y);
				}
				else
					if(op==3)
					{
						float X,Y;
						printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
						printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU MULTIPLICAÇÃO*");
						printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
						printf(WHT"\n\nINSIRA OS NUMEROS: ");scanf("%f%f",&X,&Y);
						printf("\n\nRESULTADO DA MULTIPLICAÇÃO= %.2f", X * Y);
					}
					else
						if(op==4)
						{
							float X,Y;
							printf(RED BLUB"\n\t\t\t\t\t\t*************************");
							printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU DIVISÃO*");
							printf(RED BLUB"\n\t\t\t\t\t\t*************************");
							printf(WHT"\n\nINSIRA OS NUMEROS: ");scanf("%f%f",&X,&Y);
							printf("\n\nRESULTADO DA DIVISÃO= %.2f", X / Y);
						}
						else
							if(op==5)
							{
								float X,Y;
								printf(RED BLUB"\n\t\t\t\t\t\t**************************");
								printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU POTÊNCIA*");
								printf(RED BLUB"\n\t\t\t\t\t\t**************************");
								printf(WHT"\n\nINSIRA OS NUMEROS: ");scanf("%f%f",&X,&Y);
								printf("\n\nRESULTADO DA POTÊNCIA= %.2f", pow(X,Y));	
							}
							else
								if(op==6)
								{
									float X;
									printf(RED BLUB"\n\t\t\t\t\t\t**********************");
									printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU RAIZ*");
									printf(RED BLUB"\n\t\t\t\t\t\t**********************");
									printf(WHT"\n\nINSIRA O NUMERO: ");scanf("%f",&X);
									printf("\n\nRESULTADO DA RAIZ= %.2f", sqrt(X));
									
								}
			}	
	}
	if((op==2))
	{
		float A,B,C,DELTA,R1,R2;
		printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
		printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU EQUAÇÃO DO 2º*");
		printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
		printf(MAGEN"\n<><><><><><><><><><><><><>");
		printf(MAGEN"\nINSIRA O COEFICIENTE|A:"),scanf("%f",&A);
		printf(MAGEN"INSIRA O COEFICIENTE|B:"),scanf("%f",&B);
		printf(MAGEN"INSIRA O COEFICIENTE|C:"),scanf("%f",&C);
		printf("<><><><><><><><><><><><><>");
		printf(CYAN"\n################################");
		DELTA=pow(B,2)-4*A*C;
		R1=(-B+sqrt(DELTA))/(2*A);
		R2=(-B-sqrt(DELTA))/(2*A);
		printf("\n\n\t DELTA= %.f",(DELTA));
		printf("\n RESULTADO RAIZ POSITIVA= %.2f",(R1));
		printf("\n RESULTADO RAIZ NEGATIVA= %.2f",(R2));
		printf("\n\n################################");
		
	}
	if((op==3))
	{
		
		char NOME[20];
		float N1,N2,N3,MEDIA; 
		printf(RED BLUB"\n\t\t\t\t\t\t********************************");
		printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU MEDIA DE NOTAS*");
		printf(RED BLUB"\n\t\t\t\t\t\t********************************");
		printf(MAGEN"\n<><><><><><><><><><><><><>");
		printf("\nINSIRA SUA PRIMERIA NOTA:"),scanf("%f",&N1);
		printf("INSIRA SUA SEGUNDA NOTA:"),scanf("%f",&N2);
		printf("INSIRA SUA TERCEIRA NOTA:"),scanf("%f",&N3);
		printf("INSIRA SEU NOME:"),scanf("%s",&NOME);
		printf(MAGEN"<><><><><><><><><><><><><>");
		printf(CYAN"\n####################");
		MEDIA=(N1+N2+N3)/3;
		printf(WHT"\n%s",NOME);
		printf(WHT" SUA MEDIA É DE %.2f",MEDIA);
		if(MEDIA<5)
			{
				printf("\nVOCÊ ESTÁ REPROVADO");
				printf(CYAN"\n####################");
			}
			else
				if(MEDIA<=5)
				{
					printf("\nVOCÊ ESTÁ DE RECUPERAÇÃO");
					printf(CYAN"\n####################");
				}
				else
					if(MEDIA>5)
					{
						printf("\nVOCÊ ESTÁ APROVADO");
						printf(CYAN"\n####################");
					}	
	}
	if((op==4)) 
	{
		printf(RED BLUB"\n\t\t\t\t\t\t*********************************");
		printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU GEOMETRIA PLANA*");
		printf(RED BLUB"\n\t\t\t\t\t\t*********************************");
		printf(WHT"\nDIGITE 1 ÁREA QUADRADO");
		printf("\nDIGITE 2 ÁREA RETANGULO");
		printf("\nDIGITE 3 ÁREA TRAPÉZIO");
		printf("\nDIGITE 4 ÁREA LOSANGO");
		printf("\nDIGITE 5 PERIMETRO QUADRILÁTEROS");
		printf("\nDIGITE 6 RAIO E COMPRIMENTO");
		printf("\n\nESCOLHA: "),scanf("%d",&op);
		if((op==1)or(op==2)or(op==3)or(op==4)or(op==5)or(op==6))
		if(op==1)
		{
			printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
			printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU ÁREA QUADRADO*");
			printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
			printf(MAGEN"\n<><><><><><><><><><><><><>");
			float L1,L2; 
			printf(WHT"\nINSIRA O LADO 1:"),scanf("%f",&L1);
			printf(WHT"INSIRA O LADO 2:"),scanf("%f",&L2);
			printf("AREA=%.2fCm",L1+L2);
			printf(MAGEN"\n<><><><><><><><><><><><><>");	
		}
		else
			if(op==2)
			{
				printf(RED BLUB"\n\t\t\t\t\t\t********************************");
				printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU ÁREA RETANGULO*");
				printf(RED BLUB"\n\t\t\t\t\t\t********************************");
				float b,h; 
				printf(MAGEN"\n<><><><><><><><><><><><><>");
				printf(WHT"\nINSIRA A BASE: "),scanf("%f",&h);
				printf("INSIRA A ALTURA: "),scanf("%f",&b);
				printf("AREA= %.2fCm²",b*h);
				printf(MAGEN"\n<><><><><><><><><><><><><>");
			}
			else
				if(op==3)
				{
					printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
					printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU ÁREA TRAPÉZIO*");
					printf(RED BLUB"\n\t\t\t\t\t\t*******************************");
					float B,b,h,AREA;
					printf(WHT"\n==========================");
					printf("\nINFORME BASE MAIOR:"),scanf("%f",&B);
					printf("<><><><><><><><><><><><><>");
					printf("\nINFORME BASE MENOR:"),scanf("%f",&b);
					printf("<><><><><><><><><><><><><>");
					printf("\nINFORME ALTURA:"),scanf("%f",&h);
					AREA=(B+b)*h/2;
					printf("==========================");
					printf("\n\n\n\n#########################");
   					printf("\n\n\tAREA= %.2fCm²",AREA);
    				printf("\n\n#########################");
				}
				else
					if(op==4)
					{
						printf(RED BLUB"\n\t\t\t\t\t\t******************************");
						printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU ÁREA LOSANGO*");
						printf(RED BLUB"\n\t\t\t\t\t\t******************************");
						float D,d,AREA;
						printf("==========================");
						printf("\nINFORME DIAGONAL MAIOR:"),scanf("%f",&D);
						printf("<><><><><><><><><><><><><>");
						printf("\nINFORME DIAGONAL MENOR:"),scanf("%f",&d);
						AREA=D*d/2;
						printf("==========================");
						printf("\n\n\n\n#########################");
    					printf("\n\n\tAREA= %.2fCm²",AREA);
   					 	printf("\n\n#########################");		
					}
					else
						if(op==5)
						{
							printf(RED BLUB"\n\t\t\t\t\t\t*****************************************");
							printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU PERIMETRO QUADRILÁTEROS*");
							printf(RED BLUB"\n\t\t\t\t\t\t*****************************************");
							printf(MAGEN"\n<><><><><><><><><><><><><>");
							float LADO1,LADO2,LADO3,LADO4; 
							printf(WHT"\nINSIRA O LADO 1:"),scanf("%f",&LADO1);
							printf(WHT"INSIRA O LADO 2:"),scanf("%f",&LADO2);
							printf(WHT"INSIRA O LADO 3:"),scanf("%f",&LADO3);
							printf(WHT"INSIRA O LADO 4:"),scanf("%f",&LADO4);
							printf("AREA=%.2fCm",LADO1+LADO2+LADO3+LADO4);
							printf(MAGEN"\n<><><><><><><><><><><><><>");
						}
						else
							if(op==6)
							{
								float R;
								printf(RED BLUB"\n\t\t\t\t\t\t************************************");
								printf(RED BLUB"\n\t\t\t\t\t\t*VOCÊ SELECIONOU RAIO E COMPRIMENTO*");
								printf(RED BLUB"\n\t\t\t\t\t\t************************************");
								printf(WHT"\nDIGITE 1 PARA ÁREA");
								printf("\nDIGITE 2 PARA CIRCUNFERÊNCIA");
								printf("\n\nESCOLHA: "),scanf("%d",&op);
								if((op==1)or(op==2))
								if(op==1)
								{
									printf(MAGEN"\n<><><><><><><><><><><><><>");
									printf(WHT"\nINSIRA O RAIO: "),scanf("%f",&R);
									printf(MAGEN"<><><><><><><><><><><><><><>");
									printf(CYAN"\n#########################");
									printf(WHT"\nAREA= %.2fCm²",pi*pow(R,2));
									printf(CYAN"\n#########################");
								}
								else
									if(op==2)
									{
										printf(MAGEN"\n<><><><><><><><><><><><><>");
										printf(WHT"\nINSIRA O RAIO: "),scanf("%f",&R);
										printf(MAGEN"<><><><><><><><><><><><><><>");
										printf(CYAN"\n#########################");
										printf(WHT"\nCOMPRIMENTO= %.2fCm²",2*pi*R);
										printf(CYAN"\n#########################");
									}
								
							}
	}
			 
}
