#include <stdio.h>

void conversaoPorValor(float dol, float cot){
	float re;
	re = dol/cot; 
	printf("Voce tem %1f reais\n", re);
}

void conversaoPorReferencia(float dol, float &re, float cot){
	re = dol/cot;
}

float dolar, real, cotacao;
main(){
	
	printf("Digite quantos dolares voce tem: ");
	scanf("%d", &dolar);
	
	printf("Quantos dolares valem 1 real agora? (cotacao) ");
	scanf("%d", &cotacao);
	
	
	conversaoPorValor(dolar, cotacao);
	
	conversaoPorReferencia(dolar, real, cotacao);
	printf("Voce tem %1f reais\n", real);
	
}
