#include <stdio.h>
#include <windows.h>
#include <conio.h>
int Soma(int x);
int main(void){
	unsigned int CPAGE_UTF8=65001;
	unsigned int CPAGE_DEFAULT=GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	int resp,i,num,num2;
	printf("\t*** Programa de Soma ***");
	printf("\n\n Digite um número inteiro positivo: ");
	scanf("%d",&resp);
	printf("\n\n\t**************************\n");
	printf("\t*  Imprimir sequência?   *\n");
	printf("\t*       sim --> 1        *\n");
	printf("\t*       não --> 2        *\n");
	printf("\t**************************\n");
	printf(" \t Resposta: ");
	scanf("%d",&num);
	if(num==1){
		printf("\n A sequência da soma foi: ");
		printf("0");
		for(i=1;i<=resp;i++){
		printf(" + %d", i);
		}
		printf(" = %d", Soma(resp));
	}
	else if(num==2){
	printf("\n A soma de %d com seus antecessores é: %d\n", resp,Soma(resp));
	}
	else{
		printf("\n\t\a*** resposta inválida ***");
	}
	printf("\n\n\t**************************\n");
	printf("\t*   Deseja continuar?    *\n");
	printf("\t*       sim --> 1        *\n");
	printf("\t*       não --> 2        *\n");
	printf("\t**************************\n");
	printf(" \t Resposta: ");
	scanf("%d", &num2);
	while(num2==1){
		printf("\n Digite um número inteiro positivo: ");
		scanf("%d",&resp);
		printf("\n\n\t**************************\n");
		printf("\t*  Imprimir sequência?   *\n");
		printf("\t*       sim --> 1        *\n");
		printf("\t*       não --> 2        *\n");
		printf("\t**************************\n");
		printf(" \t Resposta: ");

		scanf("%d",&num);
		if(num==1){
			printf("\n A sequência da soma foi: ");
			printf("0");
			for(i=1;i<=resp;i++){
			printf(" + %d", i);
			}
			printf(" = %d", Soma(resp));
		}
		else if(num==2){
			printf("\n A soma de %d com seus antecessores é: %d\n", resp,Soma(resp));
		}
		else{
		printf("\n\t\a*** resposta inválida ***");
		}
		printf("\n\n\t**************************\n");
		printf("\t*   Deseja continuar?    *\n");
		printf("\t*       sim --> 1        *\n");
		printf("\t*       não --> 2        *\n");
		printf("\t**************************\n");
		printf(" \t Resposta: ");
		scanf("%d", &num2);
	}
	while(num2==2){
		printf("\n\n\t\a     *****************\n");
		printf("\t     * Até a próxima *\n");
		printf("\t     *****************");
		break;
		}
	if(num2!=1 && num2!=2){
		printf("\n\t\a*** resposta inválida ***");
		printf("\n\n\t**************************\n");
		printf("\t*   Deseja continuar?    *\n");
		printf("\t*       sim --> 1        *\n");
		printf("\t*       não --> 2        *\n");
		printf("\t**************************\n");
		printf(" \t Resposta: ");
		scanf("%d", &num2);
		}
		while(num2==1){
		printf("\n Digite um número inteiro positivo: ");
		scanf("%d",&resp);
		printf("\n\n\t**************************\n");
		printf("\t*  Imprimir sequência?   *\n");
		printf("\t*       sim --> 1        *\n");
		printf("\t*       não --> 2        *\n");
		printf("\t**************************\n");
		printf(" \t Resposta: ");

		scanf("%d",&num);
		if(num==1){
			printf("\n A sequência da soma foi: ");
			printf("0");
			for(i=1;i<=resp;i++){
			printf(" + %d", i);
			}
			printf(" = %d", Soma(resp));
		}
		else
		printf("\n A soma de %d com seus antecessores é: %d\n", resp,Soma(resp));
	
		printf("\n\n\t**************************\n");
		printf("\t*   Deseja continuar?    *\n");
		printf("\t*       sim --> 1        *\n");
		printf("\t*       não --> 2        *\n");
		printf("\t**************************\n");
		printf(" \t Resposta: ");
		scanf("%d", &num2);
	}
return 0;
	getch();
	SetConsoleOutputCP(CPAGE_DEFAULT);
}
int Soma(int x){
	if (x==0){
		return x;
	}
	else 
		return x+Soma(x-1);
}