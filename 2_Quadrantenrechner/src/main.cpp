#include <Quadrantenrechner.h>
#include <stdio.h>

int main(void)
{
	Quadrantenrechner quadrantenrechner = Quadrantenrechner(-2,-1);
	
	printf("der Wert -2, -1 liegt im %d. Quadranten.\n", quadrantenrechner.getQuadrant());
}
