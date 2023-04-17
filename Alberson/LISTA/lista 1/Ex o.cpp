#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int val;

//Feito com passagem parametro por VALOR;
void fat (int n){
	int f,c;
	
	f=1;
	for(c=1;c<=n;c=c+1){
		f=f*c;
		printf("Fatorial de %d= %d\n",c,f);
		printf("\n");
  	}
}

//Feito com passagem parametro por REFERENCIA;
void fato (int &num){
	int fa,cont;
	
	fa=1;
	for(cont=1;cont<=num;cont=cont+1){
		fa=fa*cont;
  	}
  	num=fa;
}

main(){
	
	printf("Informe um valor: ");
	scanf("%d",&val);
	printf("\n");
	fat(val);
	printf("========================================\n\n");
	fato(val);
	printf("Fatorial = %d\n",val);
	printf("\n");
}




