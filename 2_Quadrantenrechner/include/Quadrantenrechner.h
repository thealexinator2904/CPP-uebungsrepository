#ifndef _QUADRANTENRECHNER_H_
#define _QUADRANTENRECHNER_H_

class Quadrantenrechner
{
	private:
		double Re_;
		double Im_;
		char Quadrant_;
		
	public:
		Quadrantenrechner(double Re, double Im);
		~Quadrantenrechner();
		char getQuadrant();
};

#endif
