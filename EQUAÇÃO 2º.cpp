#include"stdio.h"
#include"math.h"
#define RED "\x1b[31m"
#define MAGEN "\e[0;35m"
#define CYAN "\e[0;36m"
#define BLUB "\e[44m"
main()
{
	float A,B,C,DELTA,R1,R2;
	printf(RED BLUB"**************************"); 
	printf(MAGEN"\n<><><><><><><><><><><><><>");
	printf(MAGEN"\nINSIRA O COEFICIENTE|A:"),scanf("%f",&A);
	printf(MAGEN"INSIRA O COEFICIENTE|B:"),scanf("%f",&B);
	printf(MAGEN"INSIRA O COEFICIENTE|C:"),scanf("%f",&C);
	printf("<><><><><><><><><><><><><>");
	printf(RED BLUB"\n**************************"); 
	printf(CYAN"\n#####################################");
	DELTA=pow(B,2)-4*A*C;
	R1=(-B+sqrt(DELTA))/(2*A);
	R2=(-B-sqrt(DELTA))/(2*A);
	printf("\n\n\t DELTA= %.f",(DELTA));
	printf("\n RESULTADO RAIZ POSITIVA= %.f",(R1));
	printf("\n RESULTADO RAIZ NEGATIVA= %.f",(R2));
	printf("\n\n#####################################");
}

