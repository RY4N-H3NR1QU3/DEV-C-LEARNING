#include"stdio.h"
main()
{
	float D,d,AREA;
	printf("==========================");
	printf("\nINFORME DIAGONAL MAIOR:"),scanf("%f",&D);
	printf("<><><><><><><><><><><><><>");
	printf("\nINFORME DIAGONAL MENOR:"),scanf("%f",&d);
	AREA=D*d/2;
	printf("==========================");
	printf("\n\n\n\n#########################");
    printf("\n\n\tAREA= %.2f",AREA);
    printf("\n\n#########################");
}

