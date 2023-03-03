#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int tam_nova = 0;
	char string[200],nova_string[200], *ponteiro;
	
	printf("Digite uma palavra ou frase : ");
	gets(string);
	
	ponteiro = string;
	
	for(int i = 0; i < 200; i++) {
		if(*(ponteiro + i) != 'a' && *(ponteiro + i) != 'e' && *(ponteiro + i) != 'i' && *(ponteiro + i) != 'o' && *(ponteiro + i) != 'u') {
			nova_string[tam_nova] = *(ponteiro + i);
			tam_nova++;
		}
		if(*(ponteiro + i) == '\0') {
			break;
		}
	}
	printf("Sua palavra original : %s\n", string);
	printf("A palavra sem vogais é: %s", nova_string);
	
	
	
	return 0;
}
