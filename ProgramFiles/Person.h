#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Person {
public:

	Person(int hR, int jI, float rebel, bool vac) {
		this->healthRisk = hr;
		this->jobImportance = jI;
		this->rebeliousness = rebel;
		this->asymptomatic = false;
		this->dayInfected = nullptr;
		this->timesInfected = 0;
		this->infected = false;
		this->vaccinated = vac;
		this->daysSinceLeft = 0;
	};

	~Person() {}

	void infectionUpdate(int minIP, int asymP, int day) {
		int infectPeriod = day - this->dayInfected;
		if (infectPeriod > asymP && this->asymptomatic == true) {
			this->asymptomatic = false;
		}
		if (infectPeriod > minIP && (rand()% 2)>0) {
			this->infected = false;
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