//Escreva um programa que armazene as notas de
//5 alunos em um vetor. O programa deve calcular e exibir a média das notas.

#include<stdio.h>

int main(){
	int notas [5];
	float soma;
	
	for(int i = 0; i < 5; i++){
		printf("Digite a nota:");
		scanf("%d", &notas[i]);
		soma = soma + notas[i];
				
}printf("%.2f", soma/5);	

}
