#include "ham.h"

int main(int argc, char** argv){
	ifstream fin;
	fin.open(argv[1]);
	Ham h;
	h.populateStrings(fin);
	h.calculateHammingDistance();
	h.displayHammingDistance();
}
