/*5. Escreva um programa que declare uma vari�vel real e um ponteiro para essa vari�vel. Em seguida, preencha a vari�vel
 com um valor real informado pelo usu�rio e utilize o ponteiro para calcular o dobro desse valor. Por fim, utilize o ponteiro 
 para imprimir na tela o valor original e o dobro calculado.*/
 
 #include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese_Brazil");
	float num,*pont;
	
	printf("Digite um valor real : ");
	scanf("%f", &num);
	
	// valor original 
	printf("Valor digitado : %.2f\n", num);
	
	//dobro do valor
	pont = &num;

	printf("O dobro do valor � : %.2f\n",(*pont)* 2);
	
	
	
	
		   
	return 0;
}
