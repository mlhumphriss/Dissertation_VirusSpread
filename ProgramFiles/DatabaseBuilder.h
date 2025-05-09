#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "DataRW.h"
#include "Person.h"
#include "EnvironmentFactors.h"

using namespace std;

class DatabaseBuilder {
public:
	DatabaseBuilder(int pop) { popDB = pop; };

	int createNewSeed(int pop, DataRW dRW) {
		seed = time(0);
		dRW.writePopDataFile(pop, seed);
		return 0;
	}
	int loadOldSeed(int pop, DataRW dRW) {
		dRW.readPopDataFile();
		seed = dRW.getReadSeed();
		if (pop < dRW.getReadPop()) { return 1; }
		return 0;
	}
	void initialiseDatabase(Person* worldPop[], int size); //todo



protected:
	time_t seed;
	int popDB;
};