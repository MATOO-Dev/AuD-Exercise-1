#include <iostream>

void CollatzConjecture(int startingPoint)
{
	int iterations = 0;
	int currentvalue = startingPoint;
	std::cout << "Calculated values are: " << currentvalue << ", ";
	//keep looping until end is reached
	//suggestion for improvement:
	//do a max iteration value, to stop executing if the calculation would take too long
	while (currentvalue > 1)
	{
		//if remainder of current/2 is 0, divide by 2
		if (currentvalue % 2 == 0)
			currentvalue = currentvalue / 2;
		//else multiply by 3, then add one
		else
			currentvalue = (currentvalue * 3) + 1;
		//add current value to console
		std::cout << currentvalue << ", ";
		//increase iteration counter to verify value later
		iterations++;
	}
	std::cout << std::endl << std::endl << "Finished in " << iterations << " iterations" << " for input value " << startingPoint << std::endl << std::endl;
}

int main()
{
	CollatzConjecture(27);
	CollatzConjecture(37);
	CollatzConjecture(42);
	return 0;
}



//solution for other tasks:
//
// Definition algorithm (from skript):
//Ein Algorithmus ist eine eindeutige, endliche Beschreibung eines
//allgemeinen, endlichen Verfahrens zur schrittweisen Ermittlung
//gesuchter Größen aus gegebenen Größen
// 
// 
// 
//Task 2:
//a)
// 
// eindeutige beschreibung:		ja
// endliche beschreibung:		ja
// allgemeines verfahren:		?
// endliches verfahren:			ja
// schrittweise ermittlung:		ja
// gegebene größen:				nein
// 
// gesamt daher:				nein
// 
//b)
//
//größen geben:
// 
// - wie viel wasser
// - wie viel kaffeepulver
// - wie viel kaffee einfüllen
// - wie viel kaffee trinken
//
// 
// 
//Task 3:
//a)
// 
// eindeutige beschreibung:		ja
// endliche beschreibung:		ja
// allgemeines verfahren:		?
// endliches verfahren:			ja
// schrittweise ermittlung:		ja
// gegebene größen:				ja
// 
// gesamt daher:				ja
// 
//b)
//
//konkreter angeben:
// - wie viel ist "ein wenig" länger?
// - Eintauchen soll 5sec nicht überschreiten. Gibt es ein minimum?
// - wann ist es "notwendig" eine weitere binde einzutauchen und anzulegen?
// - Evtl. Verband modellieren konkreter ausdrücken?