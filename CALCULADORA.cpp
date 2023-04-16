#include"stdio.h"
#include"math.h"
#define RED "\x1b[31m"
#define MAGEN "\e[0;35m"
#define CYAN "\e[0;36m"
#define BLUB "\e[44m"
#define WHT "\e[0;37m"
#define REDB "\e[41m"
main()
{
	float V1,V2;
	printf(RED BLUB"\n*******************************"); 
	printf("\n*INSIRA OS VALORES LOGO ABAIXO*");
	printf(RED BLUB"\n*******************************"); 
	printf(MAGEN"\n\n<><><><><><><><><><><><><>");
	printf(WHT"\n\tVALOR 1:"),scanf("%f",&V1);
	printf("\tVALOR 2:"),scanf("%f",&V2);
	printf(MAGEN"<><><><><><><><><><><><><>");
	printf(CYAN"\n################################");
	printf(WHT"\nSOMA= %.2f",V1+V2);
	printf(WHT"\nSUBTRACAO= %.2f",V1-V2);
	printf(WHT"\nMULTIPLICACAO= %.2f",V1*V2);
	printf(WHT"\nDIVISAO= %.2f",V1/V2);
	printf(WHT"\nRAIZ= %.2f",sqrt(V1+V2));
	printf(WHT"\nPOTENCIA= %.2f",pow(V1,V2));
	printf(CYAN"\n################################");
}
