#include <stdio.h>
#include <math.h>

int main()
{
	int eleccion, Max, pol[20], x, i, resultado = 0;

	printf("\n\tPOLINOMIOS\n\n");
	printf("Opciones: \n");
	printf("\n1. Introducir el polinomio y evaluarlo.\n2. Multiplicar.\n3. Dividir. ");
	printf("\nEscogiste: "); scanf_s("%i", &eleccion);

	switch (eleccion)
	{
	case 1:printf("\n\tEscogiste: %i", eleccion);
		printf("\n\nGrado maximo del polinomio?: "); scanf_s("%i", &Max);
		printf("\nCoeficiente del monomio?");

		i = 0;
		while (i < Max + 1) {
			printf("\nx^%i tiene: ", i); scanf_s("%i", &pol[i]);
			i++;
		}

		i = 0;
		while (i < Max + 1) {
			printf("(%ix^%i)+", pol[i], i);
			i++;
		}
		printf("\n\nQue valor tiene x?: "); scanf_s("%i", &x);
		
		i = 0;
		while (i < Max + 1) {
			resultado = resultado + (pow(x, i) * pol[i]);
			i++;
		}
		printf("\n");
		
		i = 0;
		while (i < Max + 1) {
			printf("(%i(%i)^%i)+", pol[i], x, i);
			i++;
		}
		printf(" = %i\n", resultado);
		break;
	default: printf("Error");
	}
}
