#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese_brazil");
	
	printf("Calcular os termos de uma P.A\n");
	
	int pg[10];
	int r;
	
	printf("Digite o valor inicial: ");
	scanf("%d",&pg[0]);
	
	printf("Digite a Razão: ");
	scanf("%d",&r);
	
	for(int i=1; i<10; i++){
		pg[i]=pg[i-1]*r;
	}
	for(int j=0; j<10; j++){
		printf("%d", pg[j]);
	}
	return 0;
}
