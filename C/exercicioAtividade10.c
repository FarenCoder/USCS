#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double nota1, nota2, nota3 = 0,mediaAritimetica=0;
    char nome[40];
    printf("Digite o nome do aluno :\n");
    gets(nome);
    printf("Digite a nota N1: \n");
    scanf("%lf",&nota1 );
    printf("Digite a nota N2: \n");
    scanf("%lf",&nota2 );
    printf("Digite a nota N3: \n");
    scanf("%lf",&nota3 );
    mediaAritimetica =(nota1+nota2+nota3)/3;
    printf("A media final do aluno �:%0.2f", mediaAritimetica );
return 0;
}
