#include"stdio.h"
#include"stdlib.h"
#include"locale.h"

main()
{
	setlocale(LC_ALL,"");char op;
	printf("\n*****************");
	printf("\n*MENU DE REGI�ES*");
	printf("\n*****************");
	printf("\n\n DIGITE 1 PARA CENTRO-OESTE");
    	printf("\n DIGITE 2 PARA SUDESTE");
    	printf("\n DIGITE 3 PARA NORDESTE");
    	printf("\n\nSELECIONE A OPERA��O:"),scanf("%s",&op);
    	switch(op)
    		case'1':
    		{
    			printf("\n\t\t\t\t******************************");
	          printf("\n\t\t\t\t*VOC� SELECIONOU CENTRO-OESTE*");
	          printf("\n\t\t\t\t******************************");
    			char prod;
    			float quant,pre,Brut,Liqu;
    			printf("\n INFORME O NOME DO PRODUTO:"),scanf("%s",&prod);
    			printf("\n INFORME O QUANTIDADE:"),scanf("%f",&quant);
    			printf("\n INFORME O PRE�O:"),scanf("%f",&pre);
    			Brut=quant*pre;
    			
    			printf("\n VALOR BRUTO:%.2fR$",Brut);
    			if(Brut<500)
    			{
    				printf("\n\t\t\t\t********************************");
	          	printf("\n\t\t\t\t*ESSE PRODUTO N�O TER� DESCONTO*");
	          	printf("\n\t\t\t\t********************************");
    				
			}
			else
			if(Brut>500||Brut<=1000)
			{
				printf("\n\t\t\t\t***************************************");
	          	printf("\n\t\t\t\t*ESSE PRODUTO N�O TER� 10%% DE DESCONTO*");
	          	printf("\n\t\t\t\t***************************************");
			}
    			
		}
		
}
