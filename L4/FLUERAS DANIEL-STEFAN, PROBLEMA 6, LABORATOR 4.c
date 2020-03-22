#include <stdio.h>
int *suma(int *, int *);
int main()
{
	int a, b, *s;
	printf("Introduceti cele doua numere intregi:\n");
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	s = suma(&a, &b);
	printf("Suma dintre numerele %d si %d este %d.\n", a, b, *s);
	getch();
	return 0;
}
int *suma(int *a, int *b)
{
	int *s, sum;
	sum = *a + *b;
	s = &sum;
	return s;
}