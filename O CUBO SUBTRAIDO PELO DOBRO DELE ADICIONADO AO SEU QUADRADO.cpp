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
	float N,CSDQ;
	printf(RED BLUB"\n************************"); 
	printf("\n*INSIRA OS DADOS ABAIXO*");
	printf(RED BLUB"\n************************"); 
	printf(MAGEN"\n<><><><><><><><><><><><><>");
	printf(WHT"\nINSIRA O NUMERO: "), scanf("%f",&N);
	CSDQ=(pow(N,3)-(N*2));
	printf("CUBO SUBTRAIDO PELO DOBRO ADICIONADO AO SEU QUADRADO= %.2f",pow(CSDQ,2));
	printf(MAGEN"\n<><><><><><><><><><><><><>");
}
