#include "DatabaseBuilder.h"


void DatabaseBuilder::initialiseDatabase(Person* worldPop[], int size) {
	srand(seed);
	int	healthRisk;
	int	jobImportance;
	float rebeliousness;
	bool vaccinated;

	for (int i = 0; i < size; ++i) {
		healthRisk = rand() % 2;
		jobImportance = rand() % 3;
	}
}