#include<stdio.h>
#include<stdlib.h>

int n, p, x, pozitie, stiva[100];
FILE *f;

p = 1;
void Init(int k)
{
	stiva[k] = 1;
}
int Succesor()
{
	if (stiva[pozitie] < n / 2)
	{
		stiva[pozitie] = stiva[pozitie] + 1; 
		return 1; 
	}
	else 
		return 0;
}
int Valid() 
{
	p = 1;
	for (int i = 1; i <= pozitie; i++)
	{
		if (i < pozitie && stiva[i] > stiva[i + 1])
			return 0;
		if (p > n) return 0;
		p = p * stiva[i];
	}
	return 1;
}
void Tipar() 
{
	f = fopen("input.txt", "a+t");
	fprintf(f, "\n");
	for (int i = 1; i <= pozitie; i++) 
	{
		fprintf(f, "%d ", stiva[i]);
	}
}
void Backtracking() 
{
	pozitie = 1;
	Init(pozitie);
	while (pozitie > 0) 
	{
		x = 1;
		int a = 0;
		while (x && !a) 
		{
			x = Succesor();
			if (x) 
				a = Valid();
		}
		if (x) 
		{
			if (p == n)
			{ 
				Tipar(); 
			}
			else 
			{
				pozitie++;
				Init(pozitie);
			}
		}
		else pozitie--;
	}
}
int main()
{
	f = fopen("input.txt", "a+t");
	fscanf(f, "%d", &n);
	Backtracking();
	getch();
	return 0;
}