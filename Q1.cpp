//01. Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o menor e o maior valor e seus índices.
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	
	int n[5],menor,maior,menor_indice,maior_indice;
	
    	for(int i= 0; i<5;i++){
		printf(" Digite o %dª número: ", i+1);
		scanf("%d", &n[i]);
	}
	
	maior= n[0];
	menor= n[0];
	
	for(int c=0; c<5; c++){
		if(maior<n[c]){
			maior=n[c];
			maior_indice=c;
		}
		if(maior>n[c]){
			menor=n[c];
			menor_indice=c;
		}
	}
	
	printf("\n\tO maior é: %d  e sua posição é a:%dª", maior, maior_indice+1);
	printf("\n\tO menor é: %d e a sua posição é a:%dª", menor,menor_indice+1);
	
	return 0;
	
}
