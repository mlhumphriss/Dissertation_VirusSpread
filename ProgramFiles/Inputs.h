#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Inputs {
public:




	bool getILockdown() { return iLockdown; }
	bool getIMaskEnforced() { return iMasksEnforced; }
	bool getISocialDistancing() { return iSocialDistancing; }
	bool getIPushHandSani() { return iPushingHandSanitizer; }
	int  getIMinInfectPeriod() { return iMinInfectionPeriod; }
	int  getIAsympPeriod() { return iAsymptomaticPeriod; }
	float getIGroupRebel() { return iGroupRebel; }
	bool getIVaccinationRollout() { return iVaccinationRollout; }
	int getILengthSim() { return iLengthSim; }

	void setILockdown(bool l) {
		iLockdown = l;
	}
	void setISocialDistancing(bool s) {
		iSocialDistancing = s;
	}
	void setIPushHandSani(bool h) {
		iPushingHandSanitizer = h;
	}
	void setIMaskEnforced(bool m) {
		iMasksEnforced = m;
	}
	void setIVaccinationRollout(bool v) {
		iVaccinationRollout = v;
	}


protected:
	bool	iMasksEnforced;
	bool	iSocialDistancing;
	bool	iPushingHandSanitizer;
	bool	iLockdown;
	bool	iVaccinationRollout;

	int		iMinInfectionPeriod;
	int		iAsymptomaticPeriod;

	float	iGroupRebel;

	int		iLengthSim;
};