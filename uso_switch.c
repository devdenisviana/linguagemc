#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int cor;
	
	printf("Escolha de cores\n");
	
	printf("\nEscolha sua cor preferida entre as opções: \n\n");
	
	printf("[1] - Cor Vermelha\n");
	printf("[2] - Cor verde\n");
	printf("[3] - Cor azul\n");
	
	scanf("%d",&cor);
	
	switch (cor)
	{
		case 1:
			system("cls");
			system("color 04");
			printf("\nSua cor preferida é vermelho\n");
			break;
		case 2:
			system("cls");
			system("color 02");
			printf("\nSua cor preferida é verde\n");
			break;
		case 3:
			system("cls");
			system("color 09");
			printf("\nSua cor preferida é azul\n");
			break;
		default:
			system("cls");
			printf("Opção inválida\n");
	}
			
	system("pause");
	
	
	
}
