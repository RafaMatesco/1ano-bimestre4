#include <stdio.h>

int formulaFibonacci(int n){
	int x;
	int Fn[n];
	Fn[0,1] = 1;
	
	for(x=0; x<=n; x++){
		if(x < 2){
			printf("(%d) ", Fn[x]);
		}else{
			Fn[x] = Fn[x-1] + Fn[x-2];
			printf("(%d) ", Fn[x]);
		}
	}
}

int nTermos, serie;
main(){
	
	printf("quantos termos da serie de fibonacci deseja ver? ");
	scanf("%d", &nTermos);
	nTermos--;

	printf("Serie de fibonacci ate o termo %d: ", nTermos+1);
	serie = formulaFibonacci(nTermos);
	
}
