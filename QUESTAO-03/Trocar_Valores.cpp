/*3. Escreva um programa que declare duas vari�veis inteiras e dois ponteiros para essas vari�veis. 
Em seguida, preencha as vari�veis com valores informados pelo usu�rio. Utilizando ponteiros, troque os 
valores entre as duas vari�veis sem usar uma vari�vel tempor�ria e sem utilizar operadores de atribui��o 
direta. Em seguida, imprima os valores atualizados das duas vari�veis.
*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese_Brazil");
	   int valor1, valor2, *ponteiro1, *ponteiro2;
	   
	   printf("Digite um n�mero : ");
	   scanf("%d", &valor1);
	   
	   printf("Digite um segundo valor : ");
	   scanf("%d", &valor2);
	   
	   	   // antes da troca
	   printf("Valores antes da troca : %d -- %d \n", valor1,valor2 );
	   
	   ponteiro1 = &valor1;
	   ponteiro2 = &valor2;
	   
	   // trocando os valores 
	   							
	   *ponteiro1 = *ponteiro2 + *ponteiro1;
	   *ponteiro2 = *ponteiro1 - *ponteiro2;
	   *ponteiro1 = *ponteiro1 - *ponteiro2; 
	   
	   //depois da troca
	   printf("Valores depois da troca : %d -- %d \n", *ponteiro1, *ponteiro2);
	   
	return 0;
}
