#include <stdio.h>

int calculoPrest(int val, int tax, int temp, int prest){
	prest = val + ((val * (tax/100)) * temp);
	return prest;
}

int valor, taxa, tempo, prestacao;

main(){
	
	printf("Digite o valor da prestacao: ");
	scanf("%d", &valor);
	printf("Digite a taxa: ");
	scanf("%d", &taxa);
	printf("Digite quantos meses esta atrasado: ");
	scanf("%d", &tempo);
	
	fflush(stdin);
	prestacao = calculoPrest(valor, taxa, tempo, prestacao);
	
	printf("O valor da sua prestacao e: %d", prestacao);


}