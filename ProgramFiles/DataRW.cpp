#include "DataRW.h"

int DataRW::writePopDataFile(int pop, time_t seed) {
    ofstream saveFile;
    saveFile.open(testDataFile.c_str());
    saveFile << pop << " "  << seed << " " << "\n";
    saveFile.close();
    return 0;
}

int DataRW::readPopDataFile() {
    int pop;
    int seed;
    ifstream infile(testDataFile);
    if (!infile.is_open()) {
        cerr << "Error: Could not open file " << testDataFile << endl;
        return -1;
    }
    infile >> pop;
    infile >> seed;
    infile.close();
    readPop = pop;
    readSeed = seed;
    return 0;
}