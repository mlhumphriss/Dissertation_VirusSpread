

class Person {
public:

	void setInfected(bool i, int d) {
		infected = i;
		dayInfected = d;
	}

	bool getInfected() {
		return infected;
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