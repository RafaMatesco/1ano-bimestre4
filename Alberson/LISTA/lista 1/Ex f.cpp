#include <stdio.h>

void somaPorValor(int x, int y, int z){
	int res;
	res = (x*x) + (y*y) + (z*z);
	printf("A soma do quadrado dos numeros digitados e: %d\n", res);
}

void somaPorReferencia(int x, int y, int z, int &res){
	res = (x*x) + (y*y) + (z*z);
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
	printf("A soma do quadrado dos numeros digitados e: %d\n", resRef);
	
}
