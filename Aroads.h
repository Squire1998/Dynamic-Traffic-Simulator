#ifndef Aroads_H
#define Aroads_H
#include"ROADS.h"

using namespace std;

class Aroads : public ROAD
{
private:								// Private members to be 
	int Separation_Distance;
	bool is_weather_bad;

public:
	void setSeparation_distance(int);	// Setter methods
	

	int getSeparation_distance();		// Getter methods
	bool is_weather_bad(string); // <-not 100% sure what type this method would be or how to implement it // work in progress
};

#endif // !Aroads_H