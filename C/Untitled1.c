#include <stdio.h>
#include <locale.h>

int main() {
//4.Escreva um programa com a Linguagem C para ler a nota da prova de 20 alunos, armazenando-em um vetor. Calcule e imprima média geral dos alunos. Imprima também a maior nota da turma//

setlocale(LC_ALL, "Portuguese");
double x[20], prova = 0, media = 0, media_geral = 0, y=0 ;
int  i = 0, cont = 	1, cont2=0;

for(i = 0; i < 20; i++){
	printf("Digite sua nota%d:"  ,i);
	scanf("%lf", &x[i]);
}

for(i = 0; i < 21; i++){
	media++;
prova = prova + x[cont2];
if (x[i]>x[cont+1]){
	y = x[i];
}

}

printf("A nota mais alta da sala é: %lf \n", y);
media_geral = prova / media;
printf("A média da sala foi: %2.lf \n", media_geral );	
}
