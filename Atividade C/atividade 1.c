#include <stdio.h>
int main() {

	int idade;
		printf ("Qual a sua idade e: ");
		scanf("%d", &idade);

	if (idade < 16) {
		printf("Você não pode votar.\n");
}
	else if (idade == 16 || idade == 17 || idade > 70)	
	{
		printf("Seu voto é facultativo.\n");
}
	else {
		printf("Seu voto é obrigatório.\n");
	}
	
	return 0;
}
