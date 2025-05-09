#include "DataRW.h"

DataRW::writePopDataFile(int pop, time_t seed) {
    ofstream saveFile;
    saveFile.open(testDataFile.c_str());
    saveFile << pop << " "  << seed << " " << "\n";
    saveFile.close();
    return 0;
}

DataRW::readPopDataFile() {
    ifstream infile(testDataFile);
    infile >> pop;
    infile >> seed;
    infile.close();
    readPop = pop;
    readSeed = seed;
    return 0;
}