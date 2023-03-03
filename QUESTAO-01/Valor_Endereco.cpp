#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int vetor[5];
	int *ponteiro;
	
	for (int i = 0; i < 5; i++){
        printf ("Digite um número qualquer : ");
        scanf ("%d", &vetor[i]);
    }
    printf ("\n");
    
    ponteiro = vetor;
    
    for(int i = 0; i < 5; i++){
    	printf("Número informado: %d\n", *(ponteiro + i));
    	printf("Endereço de memória: %p\n", ponteiro + i);
	}
    
	return 0;
}
