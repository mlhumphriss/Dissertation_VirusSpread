

class Person {
public:

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

	int getDayInfected() {
		return dayInfected;
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

protected:
	bool	asymptomatic;
	bool	infected;
	int		dayInfected;

	bool	vaccinated;
	int		healthRisk;
	int		jobImportance;

	int		daysSinceLeft;


	float	rebeliousness;

};