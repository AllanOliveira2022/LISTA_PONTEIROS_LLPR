/*4. Escreva um programa que solicite ao usuário que digite um número inteiro positivo n. 
Em seguida, crie um vetor dinamicamente alocado de tamanho n e preencha o vetor com valores 
inteiros informados pelo usuário. Em seguida, crie um ponteiro que aponte para o primeiro elemento 
do vetor e percorra o vetor utilizando esse ponteiro, imprimindo na tela os valores dos elementos do vetor em ordem inversa.
*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese_Brazil");
	int tam;
	int vetor[tam], *ponteiro;
	
	printf("Digite o tamanho do vetor : ");
	scanf("%d", &tam);
	
	for(int i =0; i < tam; i++){
		printf("Valor %d : ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	ponteiro = vetor;
	printf("ORDEM INVERSA : \n");
	for(int i = tam; i > 0; i--){
		printf("%d ", *(ponteiro + (i - 1)));	
	}
	   
	return 0;
}
