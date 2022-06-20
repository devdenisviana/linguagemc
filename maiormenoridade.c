#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	//solicita a idade ao usu�rio e armazena a resposta na memoria.
	printf("Digite sua idade: \n");
	scanf("%d,", &idade);
	
	//verifica se o usu�rio � maior ou menor de idade e exibe uma mensagem em tela classificando-o
	if (idade<18)
	{
		printf("\n Voc� � menor de idade \n");
	}
	if (idade>=18)
	{
		printf("\n Voc� � maior de idade \n");
	}
	
	system("pause");
	
}
