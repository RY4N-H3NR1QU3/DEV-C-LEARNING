#include"stdio.h"
#include"stdlib.h"
main()
{
    int A[3][3],i,j;
    for(i=0;i < 3; i++)
    for(j=0;j < 3; j++)
    {
        printf("\n DIGITE O ELEMENTO DA MATRAIZ A:",i+1,j+1);
        scanf("%d",&A[i][j]);system("cls");
        
    }
    for(i=0; i < 3;i++)
    {
        for(j=0;j < 3; j++)
        printf(" %d", A[i][j]);
        printf("\n");
    }
}
