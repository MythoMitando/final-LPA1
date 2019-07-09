#include<stdio.h>
#include<locale.h>
#include<string.h>

typedef struct{
	
	char nome[50];
	int idade;
	char sexo;
	float altura;
	
}Pessoa;

void imprimir(Pessoa humano);

main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	Pessoa pessoa;
	
	printf("Diga seu nome:\n\n");
	fflush(stdin);
	fgets(pessoa.nome, 50, stdin);
	
	printf("\n\nQual sua idade?\n\n");
	scanf("%d", &pessoa.idade);
	
	printf("\n\nQual o seu sexo? [M]asculino ou [F]eminino?\n\n");
	fflush(stdin);
	scanf("%c", &pessoa.sexo);
	
	printf("\n\nPor último, qual sua altura(em metros)?\n\n");
	scanf("%f", &pessoa.altura);
	
	system("cls");
	
	imprimir(pessoa);
	
}

void imprimir(Pessoa humano){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int t = strlen(humano.nome);
	
	printf("Nome: %s (%d caracteres)\n\nIdade: %d\n\nSexo: %c\n\nAltura: %.2f", humano.nome,  t-1, humano.idade, humano.sexo, humano.altura );
	
}
