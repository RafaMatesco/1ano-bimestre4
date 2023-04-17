#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//RAFAEL GIORDANO MATESCO 
//50210686
//1HID

//procedimento para preencher o vetor disciplinas
char disciplinas[5];
void nome_disciplinas(){
	int x;
	for(x=0; x<5; x++){
			printf("Disciplina %d: ", x+1);
			scanf("%s", &disciplinas[x]);
	}
}


//procedimento para preencher a matriz medias_bimestrais
float medias_bimestrais[4][5];
void tabela_medias(char disciplina[5], int pos_col){
		int x,  y;	
		for(x=0; x<4; x++){
			do{
				printf("Materia -%c-", disciplina[pos_col]);
				printf("\ndigite a nota do bimestre %x: ", x+1);
				scanf("%f", &medias_bimestrais[x][pos_col]);
				if((medias_bimestrais[x][pos_col] <0) || (medias_bimestrais[x][pos_col] >10)){
					printf("Digite uma nota valida, tente novamente\n");
				}
			}while((medias_bimestrais[x][pos_col] < 0) || (medias_bimestrais[x][pos_col] > 10));
		}
		
		printf("\n");
}


//funcao para preencher o vetor total pontos ano
float total_pontos_ano [5];
float pontos_dis(int y){
	float soma_medias;
	soma_medias = medias_bimestrais[0][y] + medias_bimestrais[1][y] + medias_bimestrais[2][y] + medias_bimestrais[3][y]; 
	return soma_medias;
}


//procedimento no caso do aluno ter ficado de exame em alguma materia
void exame_final(float &total_pontos, int indice_posicao){
	total_pontos = 10 - (total_pontos / 4);
}


int x, y;
float nota_exame;
//------------------------------------------------------------------------------------------------------------
main(){
	

	//preencher o vetor disciplinas
	printf("Digite o nome da disciplina e de enter para digitar a proxima\n");
	nome_disciplinas();
	

	//preencher a tabebla com as medias de cada materia
	for(y=0; y<5; y++){
		system("cls");
		tabela_medias(disciplinas, y);
	}
	
	system("cls");
	

	//soma o total de pontos em cada materia
	for(y=0; y<5; y++){
		total_pontos_ano[y] = pontos_dis(y);
		//printf("%d\n", total_pontos_ano[y]);
	}
	

	//apresentando tabela de medias e somas
	for(x=0; x<5; x++){
		printf("\n%c -> |", disciplinas[x]);
			for(y=0; y<4; y++){
			printf("| %.1f |", medias_bimestrais[y][x]);
		}
		printf("| - %.1f", total_pontos_ano[x]);
	}
	printf("\n\n");
	

	//mostrando se o aluno foi aprovado, retido ou ficou de exame
	int i;
	printf("APROVADO em:\n");
	for(x=0; x<5; x++){
		if(total_pontos_ano[x] >= 24){
			printf("%c\n", disciplinas[x]);
			i++;
		} 
	}
	if(i < 5){
		printf("EXAME FINAL em:\n");	
		for(x=0; x<5; x++){
			if((total_pontos_ano[x] >= 15) && (total_pontos_ano[x] < 24)){
				printf("%c\n", disciplinas[x]);
				i++;
			}
		}
	}
	if(i < 5){
		printf("RETIDO em:\n");
		for(x=0; x<5; x++){
			if(total_pontos_ano[x] < 15){
				printf("%c\n", disciplinas[x]);
				i++;
			}
		}	
	}
	system("pause");
	system("cls");
	

	//resultados exame final
	for(x=0; x<5; x++){
		if((total_pontos_ano[x] >= 15) && (total_pontos_ano[x] < 24)){
			printf("Digite a nota tirada no exame da disciplina %c: ", disciplinas[x]);
			scanf("%f", &nota_exame);
			exame_final(total_pontos_ano[x], x);
			printf("Nota que voce teria que tirar: %.1f\n", total_pontos_ano[x]);
			if(nota_exame >= total_pontos_ano[x]){
				printf("\nRESULTADO APOS EXAME: APROVADO em %c\n\n", disciplinas[x]);
				system("pause");
			}else{
				printf("\nRESULTADO APOS EXAME: RETIDO em %c\n\n", disciplinas[x]);
				system("pause");
			}
		}
	}
	
	
}