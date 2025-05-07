

class Person {
public:

	Person(int hR, int jI, float rebel, bool vac) {
		this->healthRisk = hr;
		this->jobImportance = jI;
		this->rebeliousness = rebel;
		this->asymptomatic = false;
		this->dayInfected = 0;
		this->timesInfected = 0;
		this->infected = false;
		this->vaccinated = vac;
		this->daysSinceLeft = 0;
	};

	~Person() {}

	void setInfected(bool i, int d) {
		infected = i;
		dayInfected = d; //Need an exception for if already infected before, or way to store multiple infections
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

	bool	vaccinated;
	int		healthRisk;
	int		jobImportance;

	int		daysSinceLeft;


	float	rebeliousness;

};