#include <stdio.h>

void somaPorValor(int x, int y, int z){
	int res;
	res = (x + y + z) * (x + y + z);
	printf("O quadrado da soma dos numeros digitados e: %d\n", res);
}

void somaPorReferencia(int x, int y, int z, int &res){
	res = (x + y + z) * (x + y + z);
}

int n1, n2, n3, resRef;
main(){
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);

	somaPorValor(n1, n2, n3);
	
	somaPorReferencia(n1, n2, n3, resRef);
	printf("O quadrado da soma dos numeros digitados e: %d\n", resRef);
	
}
