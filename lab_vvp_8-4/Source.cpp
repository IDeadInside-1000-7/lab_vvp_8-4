#include <stdio.h>
#include <math.h>
void main()
{
	printf("Vvedite dvuznacnoe chislo (snachala desyatki, potom edinitsi)\n");
	int change, a[2] = { 0, 0 };
	printf("Desyatki = ");
	scanf("%i", &a[0]);
	printf("Edinitsi = ");
	scanf("%i", &a[1]);
	change = a[0];
	a[0] = a[1];
	a[1] = change;
	printf("Resultat: ");
	printf("%i", a[0]);
	printf("%i", a[1]);
}