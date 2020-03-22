#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p, x, i;
	int v[] = { 6, 9, 1, -7, 19 };
	x = 9;
	p = &x;
	printf("Valoarea pointerului de la inceput este: %d.\n", *p);
	(*p)++;
	printf("Valoarea pointerului dupa incrementare este: %d.\n", *p);
	(*p)--;
	printf("Valoarea pointerului dupa decrementare este: %d.\n\n", *p);
	printf("Avem vectorul v= ");
	for (i = 0; i < 5; i++)
		printf("%d ", v[i]);
	printf("\nPointerul 'p' primeste adresa de inceput a acestui vector (v[0]).\n");
	p = &v;
	printf("La inceput acesta este: %d.\n", *p);
	(*p++);
	printf("Dupa incrementare acesta devine: %d.\n", *p);
	(*p--);
	printf("Apoi, dupa incrementare, acesta este: %d.\n", *p);
	printf("Concluzie:\n--->Un vector poate fi parcurs cu ajutorul unui pointer fiind folosite operatiile de incrementare, respectiv decrementare.\n");
	getch();
	return 0;
}