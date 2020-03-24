#include <Spritrechner.h>

using namespace std;

Spritrechner::Spritrechner(double gefahreneKM, double verbrauchInL)
{
	gefahreneKM_ = gefahreneKM;
	verbrauchInL_ = verbrauchInL;
	rechner();
}

Spritrechner::~Spritrechner()
{
}

void Spritrechner::rechner()
{
	durchschnittsverbrauch_ = verbrauchInL_ *100 /gefahreneKM_;
}

double Spritrechner::getDurchschnittsverbrauch()
{
	return durchschnittsverbrauch_;
}
