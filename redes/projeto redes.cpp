#include <stdio.h>
#include <stdlib.h>
#include<time.h>

char palavra[100], ch;
int chave1, chave2;

void criptografar(char palavra[100]){
	int i;
	for(i = 0; palavra[i] != '\0'; i++){
		ch = palavra[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + chave1;
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			palavra[i] = ch;
		}else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + chave1;
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			palavra[i] = ch;
		}
	}
}

void descriptografar(char palavra[100]){
	int i;
	for(i = 0; palavra[i] != '\0'; ++i){
		ch = palavra[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - chave2;
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			palavra[i] = ch;
		}else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - chave2;
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			palavra[i] = ch;
		}
	}
}


main(){
	srand(time(NULL));
	
	//gerando a palavra e chave para criptografar
	printf("Digite a mensagem (ate 100 letras): ");
	gets(palavra);
	while(chave1 == 0){
		chave1 = rand() % 10;
	}
	printf("Sua chave = %d\n", chave1);
	system("pause");
	
	criptografar(palavra);
	
	system("cls");
	printf("A palavra criptografada: %s\n", palavra);
	
	while(chave1 != chave2){
		printf("Digite a chave usada: ");
		scanf("%d", &chave2);
		if(chave1 == chave2){
			descriptografar(palavra);
		}else{
			printf("chave invalida\n");
			system("pause");
			system("cls");
		}
	}
	system("cls");
	printf("A palavra descriptografada: %s\n\n", palavra);
	system("pause");
}
