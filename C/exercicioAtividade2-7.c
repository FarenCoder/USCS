#include <stdio.h>
#include <locale.h>
void imprimeAluno(){
double nota1=0, nota2=0, nota3 = 0,mediaPonderada;
char nome[40];
printf("Digite o nome do aluno :\n");
gets(nome);
printf("Digite a nota N1: \n");
scanf("%lf",&nota1 );
printf("Digite a nota N2: \n");
scanf("%lf",&nota2 );
printf("Digite a nota N3: \n");
scanf("%lf",&nota3 );
mediaPonderada =((nota1*1)+(nota2*2)+(nota3*3))/6;
printf("A media final do aluno é:%0.2f", mediaPonderada );
}
int main(){
setlocale(LC_ALL,"Portuguese");
imprimeAluno();
}
