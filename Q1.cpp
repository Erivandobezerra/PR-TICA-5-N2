//01. Crie um programa em C que pe�a 10 n�meros, armazene eles em um vetor e diga qual elemento � o menor e o maior valor e seus �ndices.
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	
	int n[5],menor,maior,menor_indice,maior_indice;
	
    	for(int i= 0; i<5;i++){
		printf(" Digite o %d� n�mero: ", i+1);
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
	
	printf("\n\tO maior �: %d  e sua posi��o � a:%d�", maior, maior_indice+1);
	printf("\n\tO menor �: %d e a sua posi��o � a:%d�", menor,menor_indice+1);
	
	return 0;
	
}
