#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double notaEscolar1=0,notaEscolar2=0,notaEscolar3=0,notaEscolar4=0,mediaEscolarFinal=0;
printf("================INICIO DO PROGRAMA=================\n");
    printf("Digite a nota 1: \n");
    scanf("%lf",&notaEscolar1 );
    printf("Digite a nota 2: \n");
    scanf("%lf",&notaEscolar2 );
    printf("Digite a nota 3: \n");
    scanf("%lf",&notaEscolar3 );
    printf("Digite a nota 4: \n");
    scanf("%lf",&notaEscolar4 );
    mediaEscolarFinal = (notaEscolar1 + notaEscolar2 + notaEscolar3 + notaEscolar4) / 4;
            if (mediaEscolarFinal >= 5)
            {
                printf("A media final escolar é:%0.2f " , mediaEscolarFinal);
				printf("\n Aluno Aprovado!");
            }
            else
            {
                printf("A media final escolar é:%0.2f " , mediaEscolarFinal);
				printf("\n Aluno Reprovado!");
            }
            printf("\n================FIM DO PROGRAMA=================\n");
return 0;
}

