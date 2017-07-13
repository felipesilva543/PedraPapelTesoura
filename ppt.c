#include <stdio.h>
#include <stdlib.h>


int ppt(){
		int tes, j1, j2;
	do{
		system("clear");
		tes = 0;
		printf("Jogador 1: Faça sua jogada!\n");
		printf("1 - Pedra\n2 - Tesoura\n3 - Papel\nJogada: ");
		scanf("%d", &j1);
		printf("\n");
		//t = j1+48;
		if((j1 < 1) || (j1 > 3)){
			system("clear");
			printf("Jogada Invalida!\n\nTente Novamente!\n\n");
			tes = 1;
			int k;
			for(k=0;k<999999999;k++){}

		}
	}while(tes);


	do{
		system("clear");
		tes = 0;
		printf("Jogador 2: Faça sua jogada!\n");
		printf("1 - Pedra\n2 - Tesoura\n3 - Papel\nJogada: ");
		scanf("%d", &j2);
		printf("\n");
		//t2 = j2+48;
		if((j2 < 1) || (j2 > 3)){
			system("clear");
			printf("Jogada Invalida!\n\nTenteNovamente\n\n");
			tes = 1;
			int k;
			for(k=0;k<999999999;k++){}

		}
	}while(tes);


	if(j1 == j2) return 0;
	if((j1 == 1) && (j2 == 2)) return 1;
	if((j1 == 2) && (j2 == 3)) return 1;
	if((j1 == 3) && (j2 == 1)) return 1;
	if((j2 == 1) && (j1 == 2)) return 2;
	if((j2 == 2) && (j1 == 3)) return 2;
	if((j2 == 3) && (j1 == 1)) return 2;
}

int main(){
	int res;
do{
	res = ppt();
	if(res == 0){
		system("clear");
		printf("Empate!\n\n");
		int k;
		for(k=0;k<999999999;k++){}
	}else{
		system("clear");
		int k;
		printf("O Jogador %d, foi o vencedor!!\n\n", res);
		for(k=0;k<999999999;k++){}
	}
}while(1);

}

