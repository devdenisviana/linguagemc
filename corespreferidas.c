#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int cor;
	
	printf("Escolha sua cor preferida entre as op��es: \n");
	
	printf("[1] - Cor Vermelha\n");
	printf("[2] - Cor Verde\n");
	printf("[3] Cor Azul\n");
	scanf("%d", &cor);
	
	switch(cor)
	{
		case 1:
			system("cls");
			system("color 04");
			printf("\n Sua cor preferida � a vermelha\n");
			break;
		case 2:
			system("cls");
			system("color 02");
			printf("\n Sua cor preferida � o verde \n");
			break;
		case 3:
			system("cls");
			system("color 09");
			printf("\n Sua cor preferida � o azul \n");
			break;
		default:
			system("cls");
			printf("\n op��o invalida\n");
	}
	system("pause");
}
