#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função principal do programa
void main(){
	
	int Dias;
	float Anos;
	
	setlocale(LC_ALL, "Portuguese");
	printf ("Entre com o número de dias: ");
	scanf ("%d", &Dias);
	
	Anos = Dias/365.25;
	
	printf ("\n\n%d dias equivalem a %.2f anos. \n", Dias, Anos);
	
	system ("pause"); //pausar o programa
	
}
