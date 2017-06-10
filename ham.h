#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Ham{

private:
	string dnaOne;
	string dnaTwo;
	int hammingDistance;

public: 
	Ham(){hammingDistance = 0;}

	void populateStrings(ifstream& fin){
		getline(fin,dnaOne);
		getline(fin,dnaTwo);
	}

	void displayStrings(){
		cout << dnaOne << '\n';
		cout << dnaTwo << '\n';
	}

	void displayHammingDistance(){
		cout << "Hamming Distance: " << hammingDistance << '\n';
	}

	void calculateHammingDistance(){
		for(int i = 0; i < dnaOne.length();i++){
			if(dnaOne.at(i) != dnaTwo.at(i))
				hammingDistance++;
		}
	}
};
