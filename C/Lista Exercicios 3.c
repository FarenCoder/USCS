#include <stdio.h>
#include <locale.h>
//1- Dados: 10 n�meros digitados pelo usu�rio. Escreva um programa com a Linguagem C para
exibir os valores negativos e que calcule e exiba a m�dia dos valores menores que zero.
/*

int main()
{
setlocale(LC_ALL, "Portuguese");

int v [10];
int v_neg [10];
int i =0, soma=0;
double media, quantidade = 0.0;

for (i = 0;i < 10;i++)
{
printf ("Digite um n�mero inteiro: ");
scanf ("%d", &v[i]);

if (v[i] < 0)
{
quantidade ++;
soma = soma + v[i];

v_neg [i] = v[i];
}
}
media = soma / quantidade;

printf ("\nOs n�meros negativos s�o: ");

for (i = 0;i < quantidade;i++)
{
printf (" | %d |", v_neg[i]);

}
printf ("\nA media dos n�mero negativos �: %.2f", media);

}

*/

//2 -Escrever um programa com a Linguagem C para ler um conjunto de n�meros reais,
armazenando-os em um array. O programa dever� calcular o quadrado dos valores deste
array, armazenando os resultados em outro array. Os conjuntos t�m 10 elementos cada.
Imprimir todos os conjuntos (arrays).
/*

int main()
{
setlocale(LC_ALL, "Portuguese");

int x[10], y[10], i;

for (i = 0; i < 10; i++)
{
printf("Digite um n�mero para saber o seu quadrada: ");
scanf("%d", &x[i]);
}

for (i = 0; i < 10; i++)
{

y[i] = x[i] * x[i];

}
for (i = 0; i < 10 ; i++)
{
printf("O quadrado �: %d \n", y[i] );
}
}

*/

//3- Escreva um programa com a Linguagem C que leia um array de 8 posi��es e, em seguida,
leia tamb�m dois valores X e Y quaisquer correspondentes � primeira e �ltima posi��o do
array. Ao final seu programa dever� escrever a soma dos valores encontrados nas respectivas
posi��es X e Y.
/*

int main()
{
setlocale(LC_ALL, "Portuguese");

int a[8], x = 0, y = 7, i, soma = 0;

for (i = 0; i < 8; i++)
{
printf("Digite um n�mero: ");
scanf("%d", &a[i]);
}

soma = a[x] + a[y];

printf("A soma do primeiro e �ltimo n�mero �: %d", soma);

}

*/

//4- Escreva um programa com a Linguagem C que leia 10 valores inteiros e, em seguida,
mostre na tela os valores lidos na ordem inversa.
/*

int main()
{
setlocale (LC_ALL, "Portuguese");

int x[10], i;

for (i = 0; i < 10; i++)
{
printf("Digite um n�mero: ");
scanf("%d", &x[i]);
}

for(i = 9; i >= 0; i --)
{
printf("\nOs n�meros digitados na ordem inversa s�o: %d ",x[i]);
}
}

*/

//5- Escreva um programa com a Linguagem C para ler a nota da prova de 15 alunos,
armazenando-em um vetor. Calcule e imprima m�dia geral dos alunos. Adiconalmente, o
programa dever� imprimir a quantidade de alunos que est�o abaixo da m�dia.
/*

int main()
{
setlocale (LC_ALL, "Portuguese");

double x[15], prova = 0, media = 0, media_geral = 0 ;

int abaixo_media = 0, i;

for(i = 0; i < 15; i++)
{
printf("Digite sua nota: ");
scanf("%lf", &x[i]);
}

for(i = 0; i < 15; i++)
{
media++;
prova = prova + x[i];

if (x[i] < 6)
{
abaixo_media++;
}
}

media_geral = prova / media;

printf("A m�dia da sala foi: %2.lf e a quantidade de alunos abaixo da m�dia �: %d ",
media_geral, abaixo_media);
}

*/

//6- Escrever um programa com a Linguagem C que leia um array de 10 posi��es e verifique se
existem valores iguais e os escreva na tela.
/*

int main()
{
setlocale (LC_ALL, "Portuguese");

int x[10], i, j, aux;

for (i = 0; i < 10; i++)
{
printf("Digite um n�mero: ");
scanf("%d", &x[i]);
}

printf("Os n�meros repetidos digitados s�o: ");

for (i = 0; i < 10; i++)
{
aux = 0;

for (j = i - 1; j < 10; j--)
{
if(x[i] == x[j])
{
aux = 1;

}
}

if (aux == 1)
{
printf(" %d \n", x[i]);
}
}
}

*/

//7- Escrever um programa com a Linguagem C para ler um array de 10 posi��es e atribur valor
0 para todos os elementos que possu�rem valores negativos.
/*

int main()
{
setlocale (LC_ALL, "Portuguese");

int x[10], i =0;

for(i = 0; i < 10; i++)
{
printf("Digite um n�mero: ");
scanf("%d", &x[i]);
}

for(i = 0; i < 10; i++)
{
if (x[i] < 0)

{
x[i] = 0;
}

printf("Os n�meros digitados foram: %d \n", x[i]);
}
}

*/

//8- Escrever um programa com a Linguagem C no qual o usu�rio dever� informar 10
n�meros inteiros e maiores que zero e armazen�-los em um array. O programa dever� exibir a
soma de todos os n�meros pares do array.
/*

int main()
{
setlocale(LC_ALL, "Portuguese");

int x[10], i = 0,y = 0 ;

for(i = 0; i < 10; i++)
{
printf("Digite um n�mero: ");
scanf("%d", &x[i]);
}

for(i = 0; i < 10; i++)
{
if (x[i] % 2 == 0)
{
y = y + x[i];

}
}

printf("A soma dos n�meros pares �: %d \n", y);
}

*/

//9- Escrever um programa com a Linguagem C no qual o usu�rio dever� informar 10 n�meros
inteiros e maiores que zero e armazen�-los em um array. O programa dever� exibir a m�dia
aritm�tica de todos os n�meros �mpares do array.
/*

int main()
{
setlocale(LC_ALL, "Portuguese");

int x[10], i = 0,y = 0, z = 0, media ;

for(i = 0; i < 10; i++)
{
printf("Digite um n�mero: ");
scanf("%d", &x[i]);
}

for(i = 0; i < 10; i++)
{
if (x[i] % 2 == 1)
{
z++;
y = y + x[i];
}

}

media = y / z;

printf("Os n�meros digitados foram: %d \n", media);
}

*/

//10- Escrever um programa com a Linguagem C no qual o usu�rio dever� informar 10
n�meros inteiros e maiores que zero e armazen�-los em um array. O programa dever� atribuir
valor 99 para todos os elementos que possu�rem valores negativos e o valor 33 para todos os
elementos que possu�rem valores pares. Em seguida o programa dever� imprimir todos os
dados do array.
/*

int main()
{
setlocale(LC_ALL, "Portuguese");

int x[10], i =0, y = 99, z = 33;

for(i = 0; i < 10; i++)
{
printf("Digite um n�mero: ");
scanf("%d", &x[i]);
}

for(i = 0; i < 10; i++)
{
if (x[i] < 0)
{

x[i] = y;
}

if (x[i] % 2 == 0)
{
x[i] = z;
}

printf("Os n�meros digitados foram: %d \n", x[i]);
}
}

*/
