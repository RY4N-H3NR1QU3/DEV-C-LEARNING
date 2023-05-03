#include"stdio.h"
#include"locale.h"
#include"math.h"
main()
{
    setlocale(LC_ALL,"");
    char op;
    printf("\n DIGITE 1 PARA O TRIPLO DE UM NUMERO");
    printf("\n DIGITE 2 PARA O CUBO DO PRIMEIRO, SUBTRAIDO PELO DOBRO DO SEGUNDO ADICIONADO A SOMA DOS DOIS");
    printf("\n DIGITE 3 PARA VER SE É MAIOR QUE 10");
    printf("\n DIGITE 4 PARA TESTE PAR OU ÍMPAR");
    printf("\n\nSELECIONE A OPERAÇÃO:"),scanf("%c",&op);
    
    switch(op)
    {
    
        case '1':
            {
                printf("\n\t\t\t\t**************************");
	            printf("\n\t\t\t\t*VOCÊ SELECIONOU O TRIPLO*");
	            printf("\n\t\t\t\t**************************");
                float N1;
                printf("\n DIGITE O NUMERO:"),scanf("%f",&N1);
                printf("\n TRIPLO:%.2f", 3*N1);
            }
        case '2':
            {
                printf("\n\t\t\t\t****************************");
	            printf("\n\t\t\t\t*VOCÊ SELECIONOU O CDSSASDD*");
	            printf("\n\t\t\t\t****************************");
                float N1,N2,CDSSASDD;
                printf("\n DIGITE OS NUMEROS:"),scanf("%f%f",&N1,&N2);
                printf("\n CUBO PRIMEIRO:%.2f",pow(N1,3));
                printf("\n SUBTRAIDO PELO DOBRO DO SEGUNDO:%.2f",pow(N1,3)-2*N2);
                printf("\n SOMA DOS NUMEROS:%.2f",N1+N2);
                CDSSASDD=pow(N1,3)-2*N2+(N1+N2);
                printf("\n CDSSASDD:%.2f",CDSSASDD);
               
            }
            case '3':
                {
                    int I;
                    printf("\n\t\t\t\t***************************");
	                printf("\n\t\t\t\t*VOCÊ SELECIONOU TESTE >10*");
	                printf("\n\t\t\t\t***************************");
                    printf("\n INFORME O NUMERO:"),scanf("d",&I);
                    if(I>10)
                        {
                            printf("\nO %d NUMERO É MAIOR QUE 10:");
                        }
                        else(I<10)
                            {
                                printf("\nO %d NUMERO É MENO QUE 10");
                            }
                }
    }
    
            
    
    
    
    
}
