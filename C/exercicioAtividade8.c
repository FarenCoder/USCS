#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int idadeDoJogador=0;
    printf("Digite a idade do jogador:");
    scanf("%d",&idadeDoJogador );
    if(idadeDoJogador<=13)
    {
    	printf("a idade do jogador é:%d\n",idadeDoJogador);
		printf("Portando ele pertence a categoria infantil" );
	}
    else
    {
    	if(idadeDoJogador>=13&&idadeDoJogador<17){
    	printf("a idade do jogador é:%d\n",idadeDoJogador);
		printf("Portando ele pertence a categoria juvenil" );
		}
		else
		{printf("a idade do jogador é:%d\n",idadeDoJogador);
		printf("Portando ele pertence a categoria Senior" );
	}
	}
return 0;
}	
