#include <stdio.h>
#include <stdlib.h>
#include <locale.h>/*este include serve para usarmos os acentos de acordo com a região em que estamos*/

int main (void)
{
	setlocale(LC_ALL, "Portuguese");/*para usarmos o locale.h precisamos usar o setlocale para indicar a nossa região*/
	
	int num, fatorial, numuser;
	
	fatorial = 1;/* defini um valor ao fatorial antes de entrar no código pois se ele fosse de valor "0" a linha 25 do nosso código comprometeria todo o código, "afinal 0 = 0 * x" seria 0 haha!*/
	printf("escreva um numero e descubra seu fatorial !: ");
	scanf("%i", &num);
	numuser = num;/* a variavel "numuser" existe para que possamos guardar o valor inicial que o usuario digitou na variavel "num" que vai subtrair no laço e perder seu valor inicial*/

	
	while (num >= 1)
	/* o nosso while funciona da seguinte forma:
	temos a variavel "num" que será o numero que o usuario ira digitar;
	após o usuario digitar o numero para descobrir o fatorial dele o nosso algoritmo ira calcular o fatorial do numero digitado;				
	o nosso while funciona com o seguinte raciocinio: 
	A condição que esta em nosso while é : enquanto o numero que o usuario digitou ser maior ou igual a 1 iremos execultar os seguintes códigos:
	*/
	{
		fatorial = fatorial * num;
		num = num -1;
	}
	printf("O fatorial de %i", numuser);
	printf(" é: %i\n", fatorial);
	
system ("pause");
return (0);
		
}
