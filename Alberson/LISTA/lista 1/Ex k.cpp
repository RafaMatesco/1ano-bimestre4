#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int num;

//Feito com passagem parametro por VALOR;
void div (int n1){
	setlocale(LC_ALL,"Portuguese");
	
	if((n1 % 2==0)||(n1 % 3==0)){
		printf("Este valor é divisível por 2 ou 3\n");
	}else{
		printf("Valor inválido!\n");
	}
}

//Feito com passagem parametro por REFERENCIA;
void divi (int &n){
	n= ((n%2)&&(n%3));
}


main(){
	setlocale(LC_ALL,"Portuguese");

	printf("Digite um número divisível por 2 OU 3: ",num);
	scanf("%d",&num);
	
	system("cls");	
	div(num);
	
	divi(num);
	if((num==0)||(num==0)){
		printf("Este valor é divisível por 2 ou 3\n");
	}else{
		printf("Valor inválido!\n");
	}	
}
