#include <Spritrechner.h>
#include <stdio.h>

int main(void)
{
	Spritrechner spritrechner = Spritrechner(100, 7.5);
	
	printf("der Durschnittsverbrauch ist: %.3f l/100km. \n",spritrechner.getDurchschnittsverbrauch());
}
