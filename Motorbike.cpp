#include "Motorbike.h"

void setsize(int width, int length){
	width = rand() % 25 + 70;
	length = rand() % 60 + 190;
}

void setspeedlim(int speedlim){

}

void setbrakedist(int brakedist, int speedlim){
	if (speedlim == 20){
		brakedist = 12;
	}
	if (speedlim == 30){
		brakedist = 23;
	}
	if (speedlim == 40){
		brakedist = 36;
	}
	if (speedlim == 50) {
		brakedist = 53;
	}
	if (speedlim == 60) {
		brakedist = 73;
	}
	if (speedlim == 70) {
		brakedist = 96;
	}
}