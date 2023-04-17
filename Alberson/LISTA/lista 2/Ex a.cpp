#include <stdio.h>

int somatorio(int n){
	int res, x;
	for(x=1; x<=n; x++){
		res = x + res;
	}
	printf("O somatorio de todos os numeros ate %d: %d\n", n, res);
}

int n, resultado;
main(){

	printf("Digite o um numero: ");
	scanf("%d", &n);
		
	resultado = somatorio(n);
	
}
