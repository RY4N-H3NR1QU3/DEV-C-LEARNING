#include"stdio.h"
#define RED "\x1b[31m"
#define MAGEN "\e[0;35m"
#define CYAN "\e[0;36m"
#define BLUB "\e[44m"
#define WHT "\e[0;37m"
#define REDB "\e[41m"
main()
{
	char NOME[10];
	float N1,N2,N3;
	printf(RED BLUB"\n************************"); 
	printf("\n*INSIRA OS DADOS ABAIXO*");
	printf(RED BLUB"\n************************"); 
	printf(MAGEN"\n<><><><><><><><><><><><><>");
	printf(WHT"\nINSIRA SEU NOME:"),scanf("%s",&NOME);
	printf("INSIRA SUA PRIMERIA NOTA:"),scanf("%f",&N1);
	printf("INSIRA SUA SEGUNDA NOTA:"),scanf("%f",&N2);
	printf("INSIRA SUA TERCEIRA NOTA:"),scanf("%f",&N3);
	printf(MAGEN"<><><><><><><><><><><><><>");
	printf(CYAN"\n####################");
	printf(WHT"\n%s",&NOME);
	printf(WHT" SUA MEDIA= %.2f",(N1+N2+N3)/3);
	printf(CYAN"\n####################");
}
