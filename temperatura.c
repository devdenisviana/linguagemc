#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main (void)
	{
/*
para converter de Fahrenheit para Celsius usa-se a formula:
c = (f-32) / 1.8
para converter de Celsius para Fahrenheit usa-se a formula:
f = c * 1.8 + 32
*/

	float f;
	printf("Entre com a temperatura em Fahrenheit\n\n");
	scanf("%f",&f);

	printf("%.f em Fahrenheit equivale a %.f em Celsius",f,(f-32)/1.8);
	printf("\n");
	system("pause");
	}
