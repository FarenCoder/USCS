#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double nota1, nota2, nota3 = 0,mediaPonderada;
    char nome[40];
    printf("Digite o nome do aluno :\n");
    gets(nome);
    printf("Digite a nota N1: \n");
    scanf("%lf",&nota1 );
    printf("Digite a nota N2: \n");
    scanf("%lf",&nota2 );
    printf("Digite a nota N3: \n");
    scanf("%lf",&nota3 );
    mediaPonderada =((nota1*2)+(nota2*4)+(nota3*6))/12;
    printf("A media final do aluno é:%0.2f", mediaPonderada );
return 0;
}
