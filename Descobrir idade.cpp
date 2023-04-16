#include"stdio.h"
main(){
	
	float ano, data;
	char nome[20];
	printf("Insira seu nome:");
	scanf("%s",&nome);
	printf("Insira o ano em que estamos:");
	scanf("%f",&data);
	printf("Insira o ano em que voce nasceu:");
	scanf("%f",&ano);
	printf("\n\n\t%s",&nome);
	printf(" tem ou vai fazer: %.f Anos" ,data-ano);
	
	
	
}
