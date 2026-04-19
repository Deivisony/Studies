#include <stdio.h>
#include <string.h>
#define NOME_COMPLETO 40
#define TAMANHO_MAX 15

int main(void)
{
	printf("Digite o nome\n");
	char nome[TAMANHO_MAX];
	fgets(nome, TAMANHO_MAX, stdin);
	printf("\n");
	printf("Digite o sobrenome\n");
	char sobrenome[TAMANHO_MAX];
	fgets(sobrenome, TAMANHO_MAX, stdin);
	printf("\n");
	/*for (int i= 0; nome[i]!= '\0'; i++)
	{
		nome[i]=
	}*/
	printf("\n");
	int test;
	for (test = 0; nome[test] != '\n'; test++)
	{
		printf("%c", nome[test]);
	}
	printf("%c", nome[test]);
	test++;
	printf("%c", nome[test]);
	test++;
	printf("%c", nome[test]);
	printf("\n");
	printf("%s %s\n", nome, sobrenome);
	printf("A segunda letra do nome eh: %c\n", nome[1]);
	printf("A segunda letra do sobrenome eh: %c\n", sobrenome[1]);
	char capslock[TAMANHO_MAX];
	int final;
	for (int i= 0; nome[i]!= '\0'; i++)
	{
		capslock[i] = nome[i] - 32;
		final = i + 1;
	}
	capslock[final] = '\0';
	printf("O nome totalmente em maisculo eh %s\n", capslock);
	char troca[TAMANHO_MAX];
	int contaTroca = 0;
	for (int i= 0; nome[i]!= '\0'; i++)
	{
		troca[i] = nome[i];
		if (nome[i] == 'a')
		{
			troca[i] = 'b';
			contaTroca++;
		}
	}
	printf("O nome com 'a' trocado por 'b' eh %s\n", troca);
	printf("O total de caracteres trocados foi %i\n", contaTroca);

	printf("Agora digite o nome de 5 pessoas\n");
	char nomes[5][NOME_COMPLETO];
	for (int i = 0; i < 5; i++)
	{
		printf("Digite o proximo nome:\n");
		fgets(nomes[i], NOME_COMPLETO, stdin);
	}
	printf("\nOs nomes são:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s", nomes[i]);
	}

}
