#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 
{
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media;
	
	printf("Digite a nota1: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota2: ");
	scanf("%f", &nota2 );
	
	media = (nota1+nota2)/2;
	
	printf("Media: %.2f\n",media);
		
	system("pause;");
	
}
