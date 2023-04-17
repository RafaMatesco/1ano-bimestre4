#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

int sexo;
char nome[30];

void processo (int sx, char nm[30]){
	setlocale(LC_ALL,"Portuguese");
	if(sx == 1){
		printf("Bom dia! Sra. %s\n",nm);
	}else{
		if(sx==2){
			printf("Bom dia! Sr. %s\n",nm);
		}else{
			printf("Digitação inválida!\n");
		}
	}
}

void sex (int &sexy,char name[30]){
	
	sexy= (sexy==1);
}

main(){
setlocale(LC_ALL,"Portuguese");
	
	printf("Informe seu nome: ");
	gets(nome);
	printf("Coloque seu Sexo (1-F ou 2-M): ");
	scanf("%d",&sexo);
	system("cls");
	processo(sexo,nome);
	
	sex(sexo,nome);
	if(sexo == 1){
		printf("Bom dia! Sra. %s\n",nome);
	}else{
		printf("Bom dia! Sr. %s\n",nome);
			if(sexo!=((1)&&(2))){
				printf("Digitação inválida!\n");
			}
	}
	
}




