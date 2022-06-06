#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	//solicita a idade ao usuário e armazena a resposta na memoria.
	printf("Digite sua idade: \n");
	scanf("%d,", &idade);
	
	//verifica se o usuário é maior ou menor de idade e exibe uma mensagem em tela classificando-o
	if (idade<18)
	{
		printf("\n Você é menor de idade \n");
	}
	if (idade>=18)
	{
		printf("\n Você é maior de idade \n");
	}
	
	system("pause;");
	
}
