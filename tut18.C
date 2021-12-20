        // Tutorial 20: Compilando seu ROOT Script //

#include "TStopwatch.h"
#include "TRandom.h"

#include <iostream> //isso é necessário? 

using namespace std; 

void tut18();
{
	TStopwatch t;
	
	TRandom2 *r = new TRandom2();
	
	double x = 0;
	
	for(int i = 0; i < 1e9; i++)
	{
		x += r->Rndm();
	}
	
	cout << x << endl;
	
	t.Print();
}
