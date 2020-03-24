#ifndef _SPRITRECHNER_H_
#define _SPRITRECHNER_H_

class Spritrechner
{
	private:
		double gefahreneKM_;
		double verbrauchInL_;
		double durchschnittsverbrauch_; //?
		
		void rechner();
		
	public:
		//Konstruktor
		Spritrechner(double gefahreneKM_, double verbrauchInL_);
		//Dekonstruktor
		~Spritrechner();
		
		//Public Methode zur Abholung der Ergebnisse
		double getDurchschnittsverbrauch();
};

#endif /*_SPRITRECHNER_H_*/
