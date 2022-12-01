//Detector de num par o impar

#include <stdio.h>

void main(void)

{
	int num;

	printf("Escriba un numero: ");
	scanf_s("%i", &num);

	if (num % 2 == 0)
		printf("Es par");
	else
		printf("Es impar");

}