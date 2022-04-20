#include<bits/stdc++.h>
using namespace std;
//Abstraction'
class AbstarctIpl {
	virtual void AskForCaptaincy() = 0;
};
class ipl: AbstarctIpl {
private:
	string team_name;
	string player_name;
	int runs;
	int wickets;

public:
	void setName(string Team_name) {
		team_name = Team_name;
	}
	string getName() { //return value of team_name property
		return team_name;
	}
	void setPlayer_name(string Player_name) {
		player_name = Player_name;
	}
	string getPlayer_name() {
		return player_name;
	}
	void setRuns(int Runs) {
		if (Runs >= 10000)//Validation Rule
			runs = Runs;
	}
	int  getRuns() {
		return runs;
	}
	void setWic(int wic) {
		wickets = wic;
	}
	int getWic() {
		return wickets;
	}

	void introduce_ipl() {
		cout << "Team- " << team_name << endl;
		cout << "player- " << player_name << endl;
		cout << "Runs- " << runs << endl;
		cout << "Wic- " << wickets << endl;
	}
	//create constructor
	ipl(string Team_name, string Player_name, int Runs, int wic) {
		team_name = Team_name;
		player_name = Player_name;
		runs = Runs;
		wickets = wic;
	}
	void AbstarctIpl() {
		if (runs > 10000) {
			cout << " " << player_name << " Got Captancy!! " << endl;
		}
		else {
			cout << " " << player_name << " Sorry No  Captancy! " << endl;
		}
	}

};



int main() {
	ipl ipl1 = ipl("RcB", "AbD", 8000, 100);
	ipl ipl2 = ipl("RcB", "Virat", 10001, 100);
	ipl1.AskForCaptaincy();
	ipl2.AskForCaptaincy();
	// ipl1.team_name="RCB";
	// ipl1.player_name="Virat Kohli";
	// ipl1.runs=7000;
	// ipl1.wickets=50;

}