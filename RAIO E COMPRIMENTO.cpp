#include"stdio.h"
#include"math.h"
#define RED "\x1b[31m"
#define MAGEN "\e[0;35m"
#define CYAN "\e[0;36m"
#define BLUB "\e[44m"
#define WHT "\e[0;37m"
#define REDB "\e[41m"
#define pi 3.14
main()
{
	float R;
	printf(RED BLUB"\n************************"); 
	printf("\n*INSIRA OS DADOS ABAIXO*");
	printf(RED BLUB"\n************************"); 
	printf(MAGEN"\n<><><><><><><><><><><><><>");
	printf(WHT"\nINSIRA O RAIO: "),scanf("%f",&R);
	printf(MAGEN"<><><><><><><><><><><><><>");
	printf(CYAN"\n#########################");
	printf(WHT"\nAREA= %.2f",pi*pow(R,2));
	printf("\nCOMPRIMENTO= %.2f",2*pi*R);
	printf(CYAN"\n#########################");
}

