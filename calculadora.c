#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	float num1, num2, res;
	char operador;
	printf("Digite um primeiro n�mero:");
	scanf("%f",&num1);
	printf("Digite o operador(+,-,*,/):");
	scanf(" %c",&operador);
	printf("Digite o segundo n�mero:");
	scanf(" %f",&num2);
	switch(operador)
	{
		case '+':
			res=num1+num2;
			printf("O resultado �: %.2f\n", res);
			break;
		case '-':
			res=num1-num2;
			printf("O resultado �: %.2f\n", res);
			break;
		case '*':
			res=num1*num2;
			printf("O resultado �: %.2f\n", res);
			break;
		case '/' :
			res= num1 / num2;
			if(num2==0)
				printf("O segundo n�mero escolhido � inv�lido para esta opera��o\n");
			else{
			printf("O resultado �: %.2f\n", res);}
			break;
		default:
			printf("Operador inv�lido");
	}
	return 0;
	system("pause");
	
}