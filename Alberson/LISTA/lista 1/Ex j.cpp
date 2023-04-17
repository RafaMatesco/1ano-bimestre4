#include <stdio.h>

void divisivelPorValor(int Val){
	if((Val%2==0) && (Val%3==0)){
		printf("%d e divisivel por 2 E 3\n", Val);
	}else{
		printf("Valor invalido\n");
	}
}
void divisivelPorReferencia(int &Val){
	if((Val%2==0) && (Val%3==0)){
		printf("%d e divisivel por 2 E 3\n", Val);
	}else{
		printf("Valor invalido\n");
	}
}

int valor, x;
main(){
		printf("Digite um valor: ");
		scanf("%d", &valor);
		printf("\n");
		divisivelPorValor(valor);
		divisivelPorReferencia(valor);
}
