#include"stdio.h"
#include"stdlib.h"
main()
{
	int V1[5],V2[5],V3[5],i;
	for(i=1;i<=5;i++)
	{
		printf("\n\tCOLOQUE O VALOR DO VETOR 1:"),scanf("%d",&V1[i]);
		printf("\n\tCOLOQUE O VALOR DO VETOR 2:"),scanf("%d",&V2[i]);
		V3[i]=V1[i]+V2[i];
	}
	for(i=1;i<=5;i++)
	{	
		printf("\nRESULTADO:%d",V3[i]);
	}
	
}
