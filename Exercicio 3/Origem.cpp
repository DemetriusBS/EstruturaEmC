#include<stdio.h>
#include<stdlib.h>

int main() {

	struct dados_do_aluno //Criando a struct
	{
		char nome[40]; //Declarando a vari�vel que armazenar� o dado dentro da estrutura
		int RU; //Declarando a vari�vel que armazenar� o dado dentro da estrutura
	}; struct dados_do_aluno aluno; //Criando a vari�vem que referenciar� a struct

	printf("Digite o nome do aluno: "); //Solicitando os dados
	fflush(stdin); //Limpeza de buffer
	fgets(aluno.nome, 40, stdin); //Armazenando o dado coletado na vari�vel nome dentro da estrutura

	printf("\n\n"); //Quebra de linha

	printf("Digite o RU do aluno: "); //Solicitando os dados
	fflush(stdin); //Limpeza de buffer
	scanf_s("%d", &aluno.RU); //Armazenando o dado coletado na vari�vel RU dentro da estrutura

	printf("\n\n"); //Quebra de linha

	printf("Nome do aluno: %s\n", aluno.nome); //Imprimindo na tela os dados armazenados na estrutura
	printf("Ru do aluno: %d\n\n", aluno.RU); //Imprimindo na tela os dados armazenados na estrutura

    system("pause");
	return 0;
}