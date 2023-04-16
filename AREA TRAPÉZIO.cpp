#include"stdio.h"
main()
{
	float B,b,h,AREA;
	printf("==========================");
	printf("\nINFORME BASE MAIOR:"),scanf("%f",&B);
	printf("<><><><><><><><><><><><><>");
	printf("\nINFORME BASE MENOR:"),scanf("%f",&b);
	printf("<><><><><><><><><><><><><>");
	printf("\nINFORME ALTURA:"),scanf("%f",&h);
	AREA=(B+b)*h/2;
	printf("==========================");
	printf("\n\n\n\n#########################");
    printf("\n\n\tAREA= %.2f",AREA);
    printf("\n\n#########################");
}
