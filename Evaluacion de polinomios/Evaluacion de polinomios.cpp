#include <stdio.h>

int main()
{
	int eleccion, Max, pol[20], x, i, resultado;

	printf("\n\tPOLINOMIOS\n\n");
	printf("Opciones: \n");
	printf("\n1. Introducir el polinomio y evaluarlo.\n2. Multiplicar.\n3. Dividir. ");
	printf("\nEscogiste: "); scanf_s("%i", &eleccion);

	switch (eleccion)
	{
	case 1:printf("\n\tEscogiste: %i", eleccion);
		printf("\n\nGrado maximo del polinomio?: "); scanf_s("%i", &Max);
		printf("\nCoeficiente del monomio?");
	}
}
