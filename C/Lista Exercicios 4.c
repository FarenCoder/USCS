#include <stdio.h>
#include <locale.h>

//1- Escrever um programa com a Linguagem C para ler um conjunto de n�meros reais, armazenando-os em um array. O programa dever� calcular o cubo dos valores deste array, armazenando os resultados em outro array. Os conjuntos t�m 15 elementos cada. Imprimir todos os conjuntos (arrays).

/*

int main()
{
	setlocale(LC_ALL, "Portuguese");
int x[15], y[15], i;

for (i = 0; i < 15; i++){
	
	printf("Digite um n�mero para ver quanto ficaria ao cubo:  ");
	scanf("%d", &x[i]);
	
}

for (i = 0; i < 15; i++){

	
	y[i] = x[i] * x[i] * x[i];

	
}
for (i = 0; i < 15 ; i++){
	

	
	printf("O cubo �: %d \n", y[i] );
}
}

*/

//2-  Escreva um programa com a Linguagem C que leia um array de 20 posi��es e, em seguida, leia tamb�m dois valores A e B quaisquer correspondentes � primeira e �ltima posi��o do array. Ao final seu programa dever� escrever a m�dia aritm�tica  dos valores encontrados nas respectivas posi��es dos valores A e B.

/*

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int  i;
double x[20],  a = 0,media = 0, b = 0, y = 0;
setlocale(LC_ALL, "Portuguese");
for(i  = 1; i < 21; i++){
	
	printf("Digite um n�mero:  ");
	scanf("%lf", &x[i]);
}
for(i = 1; i < 21; i++){

	if(i == 19){
		a = x[i];
		y++;
		
	}
	if(i == 20){
		b = x[i];
		y++;
	}

}
media = (a + b) / y;
printf("A m�dia de valores dos ultimos n�meros digitados �: %lf", media);

}

*/

/*

//3- Escreva um programa com a Linguagem C que leia 99 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x[99], i;

for(i = 0; i < 	99; i++){
	
	printf("Digite um n�mero:  ");
	scanf("%d", &x[i]);
}
for(i = 98; i >= 0; i--){
	
	printf("O n�mero digitado foi: %d \n", x[i]);
}
}

*/

/*

//4- 

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int n[20], i, maior = 0;
	double soma, media;
	
	printf ("Digite as 20 notas: \n");
	for (i = 1; i < 21; i++)
	{
		scanf ("%d", &n[i]);
		soma = soma + n[i];
	}
	
	for (i = 1; i < 21; i++)
	{
		if (maior < n[i])
		{
			maior = n[i];
		}
	}
	
	media = soma / 20;
	
	printf ("A m�dia da sala foi: %.2f\n", media);
	
	printf ("A maior nota foi: %d", maior);
}

*/

//5- Escrever um programa com a Linguagem C que leia um array de 20 posi��es e verifique se existem valores iguais e os escreva na tela.

/*

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, j, n[20];
	
	for (i = 1; i < 21; i++)
	{
		printf ("Digite o n�mero da posi��o %i: ", i);
		scanf ("%i", &n[i]);
	}
	
	printf ("Os n�meros que se repetem s�o: \n");
	
	for (i = 1; i < 21; i++)
	{
		for (j = i + 1; j <= 21; j++)
		{
			if (n[i-1] == n[j])
			{
				 printf ("%d\n", n[i]);
			}
		}
	}
	
}

*/

//6- Escrever um programa com a Linguagem C para ler um array de 10 posi��es e atribuir valor 99 para todos os elementos que forem pares.

/*

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n[10], i = 0;
	
	printf ("Digite 10 n�meros: \n");
	
	for (i = 0; i < 10; i++)
	{
		scanf ("%d", &n[i]);
	}
	
	printf ("\n");
	
	for (i = 0; i < 10; i++)
	{
		if (n[i] % 2 == 0)
		{
			n[i] = 99;
		}
			
		printf ("%d\n", n[i]);
	}
}

*/

//7- Numa danceteria, numa noite, estiveram 300 clientes, desses, muitos pagaram suas contas com cheque, cart�o de credito e c�dulas. Construa programa com a Linguagem C para somar o total de valores pagos em c�dulas, cheques e cart�es de credito, e a receita total que obteve a danceteria.

/*

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int codigo, i;
	double cheque, cedula, credito, total_cheque, total_cedula, total_credito, total;
	
	for(i = 0; i < 5; i++)
	{

		printf ("Digite o c�digo do pgto: ");
		scanf ("%d", &codigo);
		
		switch (codigo)
		{
			case 1: 
			printf ("Digite o valor a ser pago com cheque: \n");
			scanf ("%lf", &cheque);
			printf ("\n");
			total_cheque = cheque + total_cheque;
			break;
			
			case 2:
			printf ("Digite o valor a ser pago com credito: \n");
			scanf ("%lf", &credito);
			printf ("\n");
			total_credito = credito + total_credito;
			break;
			
			case 3:
			printf ("Digite o valor a ser pago com cedula: \n");
			scanf ("%lf", &cedula);
			printf ("\n");
			total_cedula = cedula + total_cedula;
			break;
			
			default: i--;
			printf ("\nC�digo inv�lido, tente novamente\n\n");
		}
	}
		total = total_cedula + total_credito + total_cheque;
		
		printf ("O total arrecadado em cheque foi: %.2f\n", total_cheque);
		printf ("O total arrecadado em c�dula foi: %.2f\n", total_cedula);
		printf ("O total arrecadado em cr�dito foi: %.2f\n", total_credito);
		printf ("O total arrecadado na noite foi: %.2f\n", total);
}

*/

//8-  Em uma elei��o presidencial, existem dois candidatos. Os votos s�o informados atrav�s de c�digo. Os dados utilizados obedecem � seguinte codifica��o: 1 e 2 = voto para os respectivos candidatos; 3 = voto em branco;4 = voto nulo. 

/*

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int qtdeVotosGeral = 0, qtdeVotosUm = 0, qtdeVotosDois = 0, qtdeVotosNulo = 0, qtdeVotosBranco = 0, qtdeVotos=0, voto=0, codigo, verificacao;
    
    do
    {
        printf ("1 - Voto para o candidato 1\n");
        printf ("2 - Voto para o candidato 2\n");
        printf ("3 - Voto em branco\n");
        printf ("4 - Voto nulo\n\n");
        printf ("Qual o seu voto?\n");
        scanf ("%d", &codigo);
        switch (codigo)
        {
         case 1:
                qtdeVotosUm++;
                break;
         case 2:
                qtdeVotosDois++;
                break;
         case 3:
                qtdeVotosBranco++;
                break;
         case 4:
                qtdeVotosNulo++;
                break ;
         default:
            printf("Op��o de voto invalida");
                if (qtdeVotos == 0)
                {
                    qtdeVotos = 0;
                }
                else
                {
                    qtdeVotos--;
                }
        break;     
        }
        qtdeVotos++;
        printf("Deseja continuar a vota��o?\n");
        scanf ("%d", &verificacao);
        
    } while (verificacao == 1);

    printf("O total de votos para cada candidato 1: %d\n", qtdeVotosUm);
        printf("O total de votos para cada candidato 2: %d\n", qtdeVotosDois);
        printf("O total de votos em branco: %d\n", qtdeVotosBranco);
        printf("O total de votos em nulo: %d\n", qtdeVotosNulo);
        printf("O total de votos: %d\n" + qtdeVotos);
    if (qtdeVotosUm > qtdeVotosDois)
    {
        printf("O canditado 1 teve %d votos, o canditado 2 teve %d votos, portanto o canditado 1 � o ganhador.\n", qtdeVotosUm, qtdeVotosDois);
    }
    else if (qtdeVotosUm == qtdeVotosDois)
    {
        printf("O canditado 1 teve %d, votos , O canditado 2 teve, %d votos , portanto ocorreu um empate.\n", qtdeVotosUm, qtdeVotosDois);
    }
    else if (qtdeVotosUm < qtdeVotosDois)
    {
        printf("O canditado 1 teve %d, votos , O canditado 2 teve, %d votos , portanto o canditado 2 � o ganhador.\n", qtdeVotosUm, qtdeVotosDois);
    }
    else
    {
        printf("O canditado 1 teve %d, e o canditado 2 teve %d\n", qtdeVotosUm, qtdeVotosDois);

}
}

*/

//9 - Foi feita uma pesquisa entre os 800 habitantes de uma regi�o para coletar os seguintes dados: sexo (0-feminino, 1-masculino), idade e altura. Escreva um programa com a Linguagem C que leia as informa��es coletadas e mostre as seguintes informa��es na tela: 

/*

int main ()

{
	setlocale (LC_ALL, "Portuguese");

	int indice = 0,indiceMulheres=0, indiceHomens=0, indiceIdade=0;
	    double mediaIdade = 0, mediaHomens = 0,mediaMulheres=0, percentualIdade=0, indicePercentual = 0, indiceGeral = 0;
	    int sexoDigitada[1000];
	    int idadeDigitada[1000];
	    int alturaDigitada[1000];
	
	    do
	    {
	        printf("Digite o sexo %d:", indice);
	        scanf ("%d", &sexoDigitada[indice]);
	        if (sexoDigitada[indice] == 0 || sexoDigitada[indice] == 1)
	        {
	            printf("Digite a idade %d:", indice);
	            scanf ("%d", &idadeDigitada[indice]);
	            printf("Digite a altura %d:", indice);
	            scanf ("%d", &alturaDigitada[indice]);
	            indice++;
	        }
	        else
	        {
	         printf("Voc� digitou um dado errado!\n");
	        }
	
	    } while (indice < 1001);
	
	    for (indice = 0; indice < 1001; indice++)
	    {
	        if (idadeDigitada[indice] >=18 && idadeDigitada[indice]<=10015)
	        {
	            indiceGeral++;
	        }
	        indicePercentual++;
	    }
	    percentualIdade = (indicePercentual / indiceGeral);
	
	    for (indice = 0; indice < 1001; indice++)
	    {
	        if (sexoDigitada[indice] == 0)
	        {
	            mediaMulheres = alturaDigitada[indice] + mediaMulheres;
	            indiceMulheres++;
	        }
	    }
	    mediaMulheres = mediaMulheres / indiceMulheres;
	    for (indice = 0; indice < 1001; indice++)
	    {
	        if (sexoDigitada[indice] == 1)
	        {
	            mediaHomens = idadeDigitada[indice] + mediaHomens;
	            indiceHomens++;
	        }
	    }
	    mediaHomens = mediaHomens / indiceHomens;
	
	        for (indice = 0; indice < 1001; indice++)
	        {
	            mediaIdade = idadeDigitada[indice]+ mediaIdade;
	            indiceIdade++;
	        }
	    mediaIdade=mediaIdade/ indiceIdade;
	
	    printf("M�dia da idade do grupo: %lf\n", mediaIdade);
	    printf("M�dia da altura das mulheres: %lf\n", mediaMulheres);
	    printf("M�dia da idade dos homens: %lf\n", mediaHomens);
	    printf("Percentual de pessoas com idade entre 18 e 35: %lf\n", percentualIdade);
	}

*/
