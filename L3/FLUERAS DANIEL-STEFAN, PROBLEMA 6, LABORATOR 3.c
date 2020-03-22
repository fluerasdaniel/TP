#include <stdio.h>
int main()
{
	int a = 0, n, c, r, p = 0;
	printf("Introduceti numarul intreg in sistemul de numere zecimale: ");
	scanf("%d", &n);
	printf("Numarul %d in sistemul binar este: ", n);
	for (c = 7; c >= 0; c--)
	{
		if (c == 3)
			printf(" ");
		r = n >> c;
		if (r & 1)
		{
			printf("1");
			a++;
		}
		else
			printf("0");
	}
	for (c = 7; c > (7 - a); c--)
		p = p + (1 << c);
	printf("\nNumarul maxim al binarului numarului intreg introdus in sistemul de numere zecimale este: %d", p);
	getch();
	return 0;
}