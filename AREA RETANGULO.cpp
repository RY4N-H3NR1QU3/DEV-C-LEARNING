#include"stdio.h"
#define RED "\x1b[31m"
#define MAGEN "\e[0;35m"
#define CYAN "\e[0;36m"
#define BLUB "\e[44m"
#define WHT "\e[0;37m"
#define REDB "\e[41m"
main()
{
	float b,h;
	printf(RED BLUB"\n************************"); 
	printf("\n*INSIRA OS DADOS ABAIXO*");
	printf(RED BLUB"\n************************"); 
	printf(MAGEN"\n<><><><><><><><><><><><><>");
	printf(WHT"\nINSIRA A BASE: "),scanf("%f",&h);
	printf("INSIRA A ALTURA: "),scanf("%f",&b);
	printf("AREA= %.2f",b*h);
	printf(MAGEN"\n<><><><><><><><><><><><><>");
}

