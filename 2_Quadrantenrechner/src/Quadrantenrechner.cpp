
#include <Quadrantenrechner.h>

using namespace std;

Quadrantenrechner::Quadrantenrechner(double Re, double Im)
{
	Re_ = Re;
	Im_ = Im;
	
	if(Re_> 0 && Im>0)
		Quadrant_ = 1;
	if(Re_< 0 && Im>0)
		Quadrant_ = 2;
	if(Re_< 0 && Im<0)
		Quadrant_ = 3;
	if(Re_> 0 && Im<0)
		Quadrant_ = 4;

}

Quadrantenrechner::~Quadrantenrechner()
{
	//do nothing
}

char Quadrantenrechner::getQuadrant()
{
	return Quadrant_;
}
