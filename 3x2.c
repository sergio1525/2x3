#include<stdio.h>//multiplicación de matrices
#include<stdlib.h>
int matriz[2][3];
int sub[3][2];
int igual[2][2];
int a,b;
main()
{
	printf("MULTIPLICACION DE MATRICES\n");
	printf("LA PRIMERA MATRIZ ES DE 2X3\n");
	for(a=0; a<2; a++)//matriz_fila1
	for(b=0; b<3; b++)//matriz_columna1
{
	printf("INTRODUCE LOS VALORES DE LA PRIMERA MATRIZ [%d][%d] :", a,b);
	scanf("%d",&matriz[a][b]);
}
	system("cls");
	
	printf("LA SEGUNDA MATRIZ ES DE 3X2\n");
	for(a=0; a<3; a++)//sub_fila2
	for(b=0; b<2; b++)//sub_columna2
{
	printf("INTRODUCE LOS VALORES DE LA SEGUNDA MATRIZ [%d] [%d] :", a,b);
	scanf("%d",&sub[a][b]);
}
	system("cls");
//LOS VALORES DE LA SEGUNDA MATRIZ SE ORDENAN DE IZQUIERDA A DERECHA, HASTA LLEGAR A LA POSICIÓN [2][1]
		igual[0][0]=(matriz[0][0]*sub[0][0])+(matriz[0][1]*sub[1][0])+(matriz[0][2]*sub[2][0]);
		igual[0][1]=(matriz[0][0]*sub[0][1])+(matriz[0][1]*sub[1][1])+(matriz[0][2]*sub[2][1]);
		igual[1][0]=(matriz[1][0]*sub[0][0])+(matriz[1][1]*sub[1][0])+(matriz[1][2]*sub[2][0]);
		igual[1][1]=(matriz[1][0]*sub[0][1])+(matriz[1][1]*sub[1][1])+(matriz[1][2]*sub[2][1]);
		
	printf("EL RESULTADO DE LA MULTIPLICACION ES:\n");
	for(a=0; a<2; a++)
{
	for(b=0; b<2; b++)
{
    printf("% d",igual[a][b]);
}
    printf("\n");
}	system("PAUSE");
}

