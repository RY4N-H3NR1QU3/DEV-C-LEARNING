#include"stdio.h"
#define RED "\x1b[31m"
#define MAGEN "\e[0;35m"
#define CYAN "\e[0;36m"
#define BLUB "\e[44m"
#define WHT "\e[0;37m"
#define REDB "\e[41m"
main()
{
	float L1,L2,L3,L4;
	printf(RED BLUB"\n************************"); 
	printf("\n*INSIRA OS DADOS ABAIXO*");
	printf(RED BLUB"\n************************"); 
	printf(MAGEN"\n<><><><><><><><><><><><><>");
	printf(WHT"\nINSIRA O LADO 1: "), scanf("%f",&L1);
	printf("INSIRA O LADO 2: "),  scanf("%f",&L2);
	printf("INSIRA O LADO 3: "), scanf("%f",&L3);
	printf("INSIRA O LADO 4: "), scanf("%f",&L4);
	printf("PERIMETRO= %.2f",L1+L2+L3+L4);
	printf(MAGEN"\n<><><><><><><><><><><><><>");
}
