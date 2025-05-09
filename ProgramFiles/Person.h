#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Person {
public:

	Person() {};
	Person(int hR, int jI, float rebel, bool vac) {
		healthRisk = hR;
		jobImportance = jI;
		rebeliousness = rebel;
		asymptomatic = false;
		dayInfected = NULL;
		timesInfected = 0;
		infected = false;
		vaccinated = vac;
		daysSinceLeft = 0;
	};

	~Person() {}

	void infectionUpdate(int minIP, int asymP, int day) {
		int infectPeriod = day - dayInfected;
		if (infectPeriod > asymP && asymptomatic == true) {
			asymptomatic = false;
		}
		if (infectPeriod > minIP && (rand()% 2)>0) {
			infected = false;
		}
	}


	void setInfected(bool i, int d) {
		if (infected == true) {
			infected = i; 
			return;
		}
		else {
			infected = i;
			if (infected == true) {
				asymptomatic = true;
				dayInfected = d; //Fixes issues from before, but still overcomplicates infected. No longer a simple setter
				daysInfected.push_back(d);
			}
		}
	}

	void setDaysSinceLeft(int d) {
		daysSinceLeft = d;
	}

	void setAsymptomatic(bool a) {
		asymptomatic = a;
	}

	void setVaccinated(bool v) {
		vaccinated = v;
	}

	int getDayInfected() {
		return dayInfected;
	}

	int getTimesInfected() {
		return timesInfected;
	}

	int getDaySinceLeft() {
		return daysSinceLeft;
	}

	bool getInfected() {
		return infected;
	}

	bool getAsymptomatic() {
		return asymptomatic;
	}

	bool getVaccinated() {
		return vaccinated;
	}

protected:
	bool	asymptomatic;
	bool	infected;
	int		dayInfected;
	int		timesInfected;
	vector<int> daysInfected;

	bool	vaccinated;
	int		healthRisk;
	int		jobImportance;

	int		daysSinceLeft;


	float	rebeliousness;

};