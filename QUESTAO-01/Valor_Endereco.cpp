#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int vetor[5];
	int *ponteiro;
	
	for (int i = 0; i < 5; i++){
        printf ("Digite um n�mero qualquer : ");
        scanf ("%d", &vetor[i]);
    }
    printf ("\n");
    
    ponteiro = vetor;
    
    for(int i = 0; i < 5; i++){
    	printf("N�mero informado: %d\n", *(ponteiro + i));
    	printf("Endere�o de mem�ria: %p\n", ponteiro + i);
	}
    
	return 0;
}
