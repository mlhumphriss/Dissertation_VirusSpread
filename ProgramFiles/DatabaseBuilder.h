#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "DataRW.h"

using namespace std;

class DatabaseBuilder {
public:

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



protected:
	time_t seed;
};