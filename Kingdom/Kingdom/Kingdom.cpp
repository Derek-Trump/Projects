#include "pch.h"
#include <iostream>
#include "string"

using namespace std;
int babies;
int DBC = 0;
int EQC = 0;
int HC = 0;
int RMU = 0;
int RFU = 0;
int rmgold;
int rfgold;
int tpop;
int tsup;
int tfoo;
int ADeer = 100;
int ADeerB;
int ABear = 50;
int ABearB;
int AElephant = 10;
int AElephantB;
int diff;
int choice;
int huntingparty;
int Adultslost;
int Childrenlost;
int food = 0;
int citizens;
int farmYeild;
int FarmYeild;
int farm;
int mines;
int mineyeild;
int MineYeild;
int SickCitizens;
int supplies;
int Gold;
int Children;
int Adults;
int adults;
int towers;
int upkeep;
bool earthquakeres = false;
bool west = false;
bool east = false;
bool south = false;
bool north = false;
bool Independece = false;
bool Walls = false;
bool rswords = false;
bool rmines = false;
bool rfarms = false;
bool rlumbermills = false;

void Bear() {
	cout << "Bears alive: " << ABear << endl;
	cout << "The people need food lets send out a hunting party. How many people should we send? ";
	cin >> huntingparty;
	if (huntingparty >= 40 && Adults >= huntingparty && ABear >= 4) {
		food = food + 400;
		cout << "You killed 4 bears and gained 400 food!" << endl;
		ABear = ABear - 4;
	}
	else if (huntingparty >= 30 && Adults >= huntingparty && ABear >= 3) {
		food = food + 300;
		cout << "You killed 3 bears and gained 300 food!" << endl;
		ABear = ABear - 3;
	}
	else if (huntingparty >= 20 && Adults >= huntingparty && ABear >= 2) {
		food = food + 200;
		cout << "You killed 2 bears and gained 200 food!" << endl;
		ABear = ABear - 2;
	}
	else if (huntingparty >= 10 && Adults >= huntingparty && ABear > 0) {
		food = food + 100;
		cout << "You killed the bear and gained 100 food!" << endl;
		ABear--;
	}
	else if (huntingparty < 10 && huntingparty > 5 && Adults >= huntingparty) {
		food = food + 100;
		Adults = Adults - 1;
		cout << "You killed the bear and gained 100 food, but lost 1 member of your hunting party." << endl;
		ABear--;
	}
	else if(huntingparty <= 5 && Adults >= huntingparty) {
		Adults = Adults - huntingparty;
		cout << "Your hunting party did not come back." << endl;
		cout << "hint: send more people when you hunt you never know what will happen." << endl;
	}
	else {
	cout << "That is too many people! please restart the game." << endl;
	system("pause");
	}
	system("pause");
	system("cls");
}

void hunger() {
	if (food <= 0 && HC == 0) {
		cout << "Your people are dieing from hunger!" << endl;
		Adultslost =Adults / 10 ;
		Childrenlost = Children / 10;
		Adults = Adults - Adultslost;
		Children = Children - Childrenlost;
		HC++;
		cout << "*hint: when low on food go hunting deer or elephants.*" << endl;
		system("pause");
		system("cls");
	}
	else if (food <= 0 && HC == 1) {
		cout << "Your people are dieing from hunger!" << endl;
		Adultslost = Adults / 5;
		Childrenlost = Children / 5;
		Adults = Adults - Adultslost;
		Children = Children - Childrenlost;
		HC++;
		cout << "*hint: when low on food go hunting deer or elephants.*" << endl;
		system("pause");
		system("cls");
	}
	else if (food <= 0 && HC == 2) {
		cout << "Your people are dieing from hunger!" << endl;
		Adultslost = Adults;
		Childrenlost = Children;
		Adults = Adults - Adultslost;
		Children = Children - Childrenlost;
		cout << "*hint: when low on food go hunting deer or elephants.*" << endl;
		system("pause");
		system("cls");
	}
	else {
		HC = 0;
	}
}

void Deer() {
	cout << "Deer alive: " << ADeer << endl;
	cout << "How many people would you like to send on this hunt?" << endl;
	cin >> huntingparty;
	if (huntingparty <= 5 && Adults >= huntingparty && ADeer > 0) {
		cout << "Your hunting party killed 1 deer in the hunt." << endl;
		cout << "+50 food" << endl;
		food = food + 50;
		ADeer--;
	}
	else if (huntingparty > 5 && huntingparty <= 10 && Adults >= huntingparty && ADeer > 3) {
		cout << "Your hunting party killed 3 deer in the hunt." << endl;
		cout << "+150 food" << endl;
		food = food + 150;
		ADeer = ADeer - 3;
	}
	else if (huntingparty > 10 && huntingparty <= 20 && Adults >= huntingparty && ADeer > 5) {
		cout << "Your hunting party killed 5 deer in the hunt." << endl;
		cout << "+250 food" << endl;
		food = food + 250;
		ADeer = ADeer - 5;
	}
	else if (huntingparty > 20 && Adults >= huntingparty && ADeer > 10) {
		cout << "Your hunting party killed 10 deer in the hunt." << endl;
		cout << "+500 food" << endl;
		food = food + 500;
		ADeer = ADeer - 10;
	}
	else {
		cout << "That is too many people!" << endl;
		system("pause");
	}
	system("pause");
	system("cls");
}

void Elephant() {
	cout << "Elephants alive: " << AElephant << endl;
	cout << "How many people would you like to send?" << endl;
	cin >> huntingparty;
	if (huntingparty <= 100 && Adults >= huntingparty && AElephant > 0){
		cout << "your huntting party was not strong enough to kill the elephant and half were trampled." << endl;
		huntingparty = huntingparty / 2;
		Adults = Adults - huntingparty;
	}
	else if (huntingparty > 100 && Adults >= huntingparty && AElephant > 0) {
		cout << "You Killed the Elephant!" << endl;
		cout << "+1000 food" << endl;
		food = food + 1000;
		AElephant--;
	}
	else {
		cout << "That is too many people! please restart the game." << endl;
		system("pause");
	}
	system("pause");
	system("cls");
}

void AnimalB() {
	ADeerB = ADeer / 10;
	ADeer = ADeer + ADeerB;
	ABearB = ABear / 10;
	ABear = ABear + ABearB;
	AElephantB = AElephant / 10;
	AElephant = AElephant + AElephantB;
}

void Hunt() {
	cout << "What would you like to hunt? " << endl;
	cout << "1. Deer" << endl;
	cout << "2. Bear" << endl;
	cout << "3. Elephant" << endl;
	cin >> choice;
	if (choice == 1) {
		Deer();
	}
	else if (choice == 2) {
		Bear();
	}
	else if (choice == 3) {
		Elephant();
	}
}

void DustBowl() {
	DBC++;
	if (DBC >= 25 && diff == 3 || DBC >= 25 && diff == 4) {
		farmYeild = farmYeild / 2;
		food = food + farmYeild;
		farmYeild = farmYeild * 2;
		DBC = 0;
	}
}

void Farmsandmines() {
	FarmYeild = farmYeild * farm;
	food = food + FarmYeild;
	MineYeild = mineyeild * mines;
	supplies = supplies + MineYeild;
	upkeep = mines * 50 + farm * 50;
	supplies = supplies - upkeep;
}

void Sickness() {
	cout << "Your people are sick and need medicine" << endl;
	cout << "Hint: You can research it or buy medicine from merchants." << endl;
	SickCitizens = citizens * 0.10;
}

void knownnations() {
	if (north == true) {
		cout << "1. Northern Realm" << endl;
	}
	if (south == true) {
		cout << "2. Southern Realm" << endl;
	}
	if (east == true) {
		cout << "3. Eastern Realm" << endl;
	}
	if (west == true) {
		cout << "4. Western Realm" << endl;
	}
}

void Trade() {
	cout << "Who should we trade with?" << endl;
	knownnations();
	cin >> choice;
	if (choice == 1 && north == true) {
		cout << "1. Buy" << endl;
		cout << "2. Sell" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "1. Food" << endl;
			cout << "2. Supplies" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "you have " << Gold << "gold" << endl;
				cout << "how much would you like to buy? supplies is 2 Gold for 1 supplies." << endl;
				cin >> choice;
				if (choice * 2 <= Gold) {
					Gold = Gold - choice * 2;
					food = food + choice;
				}
			}
			else if (choice == 2) {
				cout << "you have " << Gold << "gold" << endl;
				cout << "how much would you like to buy? supplies is 2 Gold for 1 supplies." << endl;
				cin >> choice;
				if (choice * 2 <= Gold) {
					Gold = Gold - choice * 2;
					supplies = supplies + choice;
				}
			}
		}
		else if (choice == 2) {
			cout << "1. Food" << endl;
			cout << "2. Supplies" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "You have " << food << " food" << endl;
				cout << "how much would you like to Sell? food is 2 Gold for 1 food." << endl;
				cin >> choice;
				if (choice <= food) {
					Gold = Gold + choice * 2;
					food = food - choice;
				}
			}
			else if (choice == 2) {
				cout << "You have " << supplies << " supplies" << endl;
				cout << "how much would you like to Sell? food is 2 Gold for 1 food." << endl;
				cin >> choice;
				if (choice <= supplies) {
					Gold = Gold + choice * 2;
					supplies = supplies - choice;
				}
			}
		}
	}
	else if (choice == 2 && south == true) {
		cout << "1. Buy" << endl;
		cout << "2. Sell" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "1. Food" << endl;
			cout << "2. Supplies" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "you have " << Gold << "gold" << endl;
				cout << "how much would you like to buy? supplies is 2 Gold for 1 supplies." << endl;
				cin >> choice;
				if (choice * 2 <= Gold) {
					Gold = Gold - choice * 2;
					food = food + choice;
				}
			}
			else if (choice == 2) {
				cout << "you have " << Gold << "gold" << endl;
				cout << "how much would you like to buy? supplies is 2 Gold for 1 supplies." << endl;
				cin >> choice;
				if (choice * 2 <= Gold) {
					Gold = Gold - choice * 2;
					supplies = supplies + choice;
				}
			}
		}
		else if (choice == 2) {
			cout << "1. Food" << endl;
			cout << "2. Supplies" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "You have " << food << " food" << endl;
				cout << "how much would you like to Sell? food is 2 Gold for 1 food." << endl;
				cin >> choice;
				if (choice <= food) {
					Gold = Gold + choice * 2;
					food = food - choice;
				}
			}
			else if (choice == 2) {
				cout << "You have " << supplies << " supplies" << endl;
				cout << "how much would you like to Sell? food is 2 Gold for 1 food." << endl;
				cin >> choice;
				if (choice <= supplies) {
					Gold = Gold + choice * 2;
					supplies = supplies - choice;
				}
			}
		}
	}
	else if (choice == 3 && east == true) {
	cout << "1. Buy" << endl;
	cout << "2. Sell" << endl;
	cin >> choice;
	if (choice == 1) {
		cout << "1. Food" << endl;
		cout << "2. Supplies" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "you have " << Gold << "gold" << endl;
			cout << "how much would you like to buy? supplies is 2 Gold for 1 supplies." << endl;
			cin >> choice;
			if (choice * 2 <= Gold) {
				Gold = Gold - choice * 2;
				food = food + choice;
			}
		}
		else if (choice == 2) {
			cout << "you have " << Gold << "gold" << endl;
			cout << "how much would you like to buy? supplies is 2 Gold for 1 supplies." << endl;
			cin >> choice;
			if (choice * 2 <= Gold) {
				Gold = Gold - choice * 2;
				supplies = supplies + choice;
			}
		}
	}
	else if (choice == 2) {
		cout << "1. Food" << endl;
		cout << "2. Supplies" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "You have " << food << " food" << endl;
			cout << "how much would you like to Sell? food is 2 Gold for 1 food." << endl;
			cin >> choice;
			if (choice <= food) {
				Gold = Gold + choice * 2;
				food = food - choice;
			}
		}
		else if (choice == 2) {
			cout << "You have " << supplies << " supplies" << endl;
			cout << "how much would you like to Sell? food is 2 Gold for 1 food." << endl;
			cin >> choice;
			if (choice <= supplies) {
				Gold = Gold + choice * 2;
				supplies = supplies - choice;
			}
		}
	}
	}
	else if (choice == 4 && west == true) {
	cout << "1. Buy" << endl;
	cout << "2. Sell" << endl;
	cin >> choice;
	if (choice == 1) {
		cout << "1. Food" << endl;
		cout << "2. Supplies" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "you have " << Gold << "gold" << endl;
			cout << "how much would you like to buy? supplies is 2 Gold for 1 supplies." << endl;
			cin >> choice;
			if (choice * 2 <= Gold) {
				Gold = Gold - choice * 2;
				food = food + choice;
			}
		}
		else if (choice == 2) {
			cout << "you have " << Gold << "gold" << endl;
			cout << "how much would you like to buy? supplies is 2 Gold for 1 supplies." << endl;
			cin >> choice;
			if (choice * 2 <= Gold) {
				Gold = Gold - choice * 2;
				supplies = supplies + choice;
			}
		}
	}
	else if (choice == 2) {
		cout << "1. Food" << endl;
		cout << "2. Supplies" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "You have " << food << " food" << endl;
			cout << "how much would you like to Sell? food is 2 Gold for 1 food." << endl;
			cin >> choice;
			if (choice <= food) {
				Gold = Gold + choice * 2;
				food = food - choice;
			}
		}
		else if (choice == 2) {
			cout << "You have " << supplies << " supplies" << endl;
			cout << "how much would you like to Sell? food is 2 Gold for 1 food." << endl;
			cin >> choice;
			if (choice <= supplies) {
				Gold = Gold + choice * 2;
				supplies = supplies - choice;
			}
		}
	}
	}
	system("pause");
	system("cls");
}

void Build() {
	cout << "What would you like to build?" << endl;
	cout << "1. Farms" << endl;
	cout << "2. Mines" << endl;
	cout << "3. Walls" << endl;
	cout << "4. Towers" << endl;
	cin >> choice;
	if (choice == 1) {
		if (farm == 0) {
			cout << "We have built our first farm!" << endl;
			farm++;
		}
		else {
			cout << "we have built 5 new farms!" << endl;
			farm = farm + 5;
		}
	}
	else if (choice == 2) {
		if (mines == 0) {
			cout << "We have built our First mine!" << endl;
			mines++;
		}
		else {
			cout << "We have made 5 new mines!" << endl;
			mines = mines + 5;
		}
	}
	else if (choice == 3) {
		cout << "You have built walls!" << endl;
		Walls = true;
	}
	else if (choice == 4) {
		cout << "We have built a tower!" << endl;
		towers++;
	}
}

void earthquake() {
	if (mines > 0 || farm > 0) {
		EQC++;
		if (EQC >= 10) {
			if (earthquakeres == false) {
				cout << "the ground is shaking, buildings are falling, and people are dieing" << endl;
				citizens = citizens - citizens * 0.1;
				cout << citizens << " Citizens lost" << endl;
				supplies = supplies - supplies * 0.1;
				cout << supplies << " supplies lost." << endl;
				EQC = 0;
			}
			else if (earthquakeres == true) {
				cout << "feels like a earthquake glad our buildings are safe now that we have renforced our stuctres." << endl;
				EQC = 0;
			}
		}
	}
}

void stats() {
	cout << "Citizens    = " << citizens << " (" << tpop << ")" << endl;
	cout << "Supplies    = " << supplies << endl;
	cout << "Mining Yeild= " << MineYeild << endl;
	cout << "Mines       = " << mines << endl;
	cout << "Upkeep      = " << upkeep << endl;
	cout << "Food        = " << food << " (" << tfoo << ")" << endl;
	cout << "Farms       = " << farm << endl;
	cout << "Gold        = " << Gold << endl;
	cout << "Audults     = " << Adults << " (" << adults << ")" << endl;
	cout << "Children    = " << Children << " (" << babies << ")" << endl;
}

void TODO() {
	if (citizens >= 1500 && Independece == true) {
		cout << "What would you like to do? " << endl;
		cout << "1. Hunt" << endl;
		cout << "2. Explore" << endl;
		cout << "3. Build" << endl;
		cout << "4. You are already your own nation" << endl;
		cout << "5. Trade" << endl;
		cout << "6. Research" << endl;
		cin >> choice;
		system("cls");
	}
	else if (citizens >= 750 && Walls == true) {
		cout << "What would you like to do? " << endl;
		cout << "1. Hunt" << endl;
		cout << "2. Explore" << endl;
		cout << "3. Build" << endl;
		cout << "4. Declare Indepenence (Must have 1500 people to declare independence)" << endl;
		cin >> choice;
		system("cls");
	}
	else if (citizens >= 375) {
		cout << "What would you like to do? " << endl;
		cout << "1. Hunt" << endl;
		cout << "2. Explore" << endl;
		cout << "3. Build" << endl;
		cin >> choice;
		system("cls");
	}
	else if (citizens < 375 && citizens >= 0) {
		cout << "What would you like to do? " << endl;
		cout << "1. Hunt" << endl;
		cout << "2. Explore" << endl;
		cin >> choice;
		system("cls");
	}
}

void start() {
	cout << "Welcome to kingdom! in this game you will lead your people from nothing to the best nation in the world!" << endl;
	cout << "Game Rules: " << endl;
	cout << "1. Children cannot go into battle but over time they do age into adults" << endl;
	cout << "2. You cannot send more people into a fight then what you currently have." << endl;
	cout << "3. If you run out of adults then you lose." << endl;
	cout << "4.if you get to 200,000 citizens then you win." << endl;
	cout << "5.If you run out of food then your people will start to die." << endl;
	system("pause");
	cout << "To start please select a difficulty:" << endl;
	cout << "====================================" << endl;
	cout << "1. Easy" << endl;
	cout << "2. Medium" << endl;
	cout << "3. Hard" << endl;
	cout << "4. Impossible" << endl;
	cin >> diff;
	system("cls");
}

void Explore() {
	cout << "Where would you like to explore?" << endl;
	cout << "1. North" << endl;
	cout << "2. South" << endl;
	cout << "3. East" << endl;
	cout << "4. West" << endl;
	cin >> choice;
	if (choice == 1) {
		cout << "You have discovered a Nation in the north." << endl;
		north = true;
	}
	else if (choice == 2) {
		cout << "You have discovered a Nation in the South." << endl;
		south = true;
	}
	else if (choice == 3) {
		cout << "You have discovered a Nation in the East." << endl;
		east = true;
	}
	else if (choice == 4) {
		cout << "You have discovered a Nation in the West." << endl;
		west = true;
	}
	system("pause");
	system("cls");
}

void research() {
	cout << "What would you like to research?" << endl;
	cout << "You have " << Gold << " gold." << endl;
	cout << "1.Mine Upgrades" << "(" << rmgold << ")" << endl;
	cout << "2.Farm Upgrades" << "(" << rfgold << ")" << endl;
	cin >> choice;
	if (choice == 1) {
		if (rmines == false && Gold >= rmgold) {
			rmines = true;
			mineyeild = mineyeild * 1.5;
			RMU++;
			cout << "Your supply production has increased!" << endl;
			Gold - 1000;
			rmgold = rmgold * 3;
		}
		else if (RMU >= 1 && Gold >= rmgold) {
			mineyeild = mineyeild * 1.5;
			RMU++;
			cout << "Your supply production has increased!" << endl;
			Gold = Gold - rmgold;
			rmgold = rmgold * 3;
		}
	}
	if (choice == 2) {
		if (rfarms == false && Gold >= rfgold) {
			rfarms = true;
			farmYeild = farmYeild * 1.5;
			RFU++;
			cout << "Your food production has increased!" << endl;
			Gold = Gold - rfgold;
			rfgold = rfgold * 3;
		}
		else if (RFU >= 1 && Gold >= rfgold) {
			farmYeild = farmYeild * 1.5;
			RFU++;
			cout << "Your food production has increased!" << endl;
			Gold = Gold - rfgold;
			rfgold = rfgold * 3;
		}
	}
	system("pause");
	system("cls");
}

void totalincome() {
	tpop = adults + babies;
	tsup = MineYeild - upkeep;
	tfoo = FarmYeild - citizens;
}

int main()
{
	start();
	if (diff == 1) {
		farmYeild = 50;
		rmgold = 1000;
		rfgold = 1000;
		mineyeild = 100;
		supplies = 2000;
		food = 5000;
		Gold = 10000;
		Adults = 1000;
		Children = 500;
		citizens = Children + Adults;
		farm = 50;
		mines = 50;
		Walls = true;
		Independece = true;
		while (citizens < 200000 && citizens > 0) {
			totalincome();
			citizens = Children + Adults;
			Farmsandmines();
			if (food < 0) {
				food = 0;
			}
			stats();
			TODO();
			if (choice == 1) {
				Hunt();
			}
			else if (choice == 2) {
				Explore();
			}
			else if (choice == 3) {
				Build();
			}
			else if (choice == 4 && citizens >= 1500) {
				cout << "You have become your own Nation!" << endl;
				Independece = true;
			}
			else if (choice == 5) {
				Trade();
			}
			else if (choice == 6) {
				research();
			}
			food = food - citizens;
			babies = Adults / 2;
			Children = Children + babies;
			adults = Adults + Children * 0.10;
			Adults = Adults + Children * 0.10;
			adults = Children * 0.10;
			Children = Children - adults;
			hunger();
			AnimalB();
		}
		if (citizens >= 200000) {
			cout << "Congradulations you won the game would you like to play again?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cin >> choice;
			if (choice == 1) {
				system("cls");
				main();
			}
			else {
				return 0;
			}
		}
		else if (citizens <= 0) {
			cout << "Sorry but you lost and your kingdom was destroyed" << endl;
			cout << "Want to try again?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cin >> choice;
			if (choice == 1) {
				system("cls");
				main();
			}
			else {
				return 0;
			}
		}
	}
	else if (diff == 2) {
		mineyeild = 100;
		farmYeild = 50;
		supplies = 1000;
		food = 2500;
		Gold = 5000;
		Adults = 500;
		farm = 10;
		mines = 10;
		Children = 250;
		citizens = Children + Adults;
		while (citizens < 200000 && citizens > 0) {
			totalincome();
			citizens = Children + Adults;
			Farmsandmines();
			if (food < 0) {
				food = 0;
			}
			stats();
			TODO();
			if (choice == 1) {
				Hunt();
			}
			else if (choice == 2) {
				Explore();
			}
			else if (choice == 3) {
				Build();
			}
			else if (choice == 4 && citizens >= 1500) {
				cout << "You have become your own Nation!" << endl;
				Independece = true;
			}
			else if (choice == 5) {
				Trade();
			}
			else if (choice == 6) {
				research();
			}
			food = food - citizens;
			babies = Adults / 2;
			Children = Children + babies;
			adults = Adults + Children * 0.10;
			Adults = Adults + Children * 0.10;
			adults = Children * 0.10;
			Children = Children - adults;
			hunger();
			AnimalB();
		}
		if (citizens >= 200000) {
			cout << "Congradulations you won the game would you like to play again?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cin >> choice;
			if (choice == 1) {
				system("cls");
				main();
			}
			else {
				return 0;
			}
		}
		else if (citizens <= 0) {
			cout << "Sorry but you lost and your kingdom was destroyed" << endl;
			cout << "Want to try again?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cin >> choice;
			if (choice == 1) {
				system("cls");
				main();
			}
			else {
				return 0;
			}
		}

	}
	else if (diff == 3) {
		farmYeild = 50;
		mineyeild = 100;
		supplies = 500;
		food = 1250;
		Gold = 2500;
		Adults = 250;
		Children = 125;
		citizens = Children + Adults;
		while (citizens < 200000 && citizens > 0) {
			totalincome();
			citizens = Children + Adults;
			Farmsandmines();
			if (food < 0) {
				food = 0;
			}
			stats();
			TODO();
			if (choice == 1) {
				Hunt();
			}
			else if (choice == 2) {
				Explore();
			}
			else if (choice == 3) {
				Build();
			}
			else if (choice == 4 && citizens >= 1500) {
				cout << "You have become your own Nation!" << endl;
				Independece = true;
			}
			else if (choice == 5) {
				Trade();
			}
			else if (choice == 6) {
				research();
			}
			food = food - citizens;
			babies = Adults / 2;
			Children = Children + babies;
			adults = Adults + Children * 0.10;
			Adults = Adults + Children * 0.10;
			adults = Children * 0.10;
			Children = Children - adults;
			hunger();
			AnimalB();
		}
		if (citizens >= 200000) {
			cout << "Congradulations you won the game would you like to play again?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cin >> choice;
			if (choice == 1) {
				system("cls");
				main();
			}
			else {
				return 0;
			}
		}
		else if (citizens <= 0) {
			cout << "Sorry but you lost and your kingdom was destroyed" << endl;
			cout << "Want to try again?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cin >> choice;
			if (choice == 1) {
				system("cls");
				main();
			}
			else {
				return 0;
			}
		}

	}
	else if (diff == 4) {
		farmYeild = 50;
		mineyeild = 100;
		supplies = 60;
		food = 100;
		Gold = 0;
		Adults = 50;
		Children = 10;
		citizens = Children + Adults;
		while (citizens < 200000 && citizens > 0) {
			totalincome();
			citizens = Children + Adults;
			Farmsandmines();
			if (food < 0) {
				food = 0;
			}
			stats();
			TODO();
			if (choice == 1) {
				Hunt();
			}
			else if (choice == 2) {
				Explore();
			}
			else if (choice == 3) {
				Build();
			}
			else if (choice == 4 && citizens >= 1500) {
				cout << "You have become your own Nation!" << endl;
				Independece = true;
			}
			else if (choice == 5) {
				Trade();
			}
			else if (choice == 6) {
				research();
			}
			food = food - citizens;
			babies = Adults / 2;
			Children = Children + babies;
			adults = Adults + Children * 0.10;
			Adults = Adults + Children * 0.10;
			adults = Children * 0.10;
			Children = Children - adults;
			hunger();
			AnimalB();
		}
		if (citizens >= 200000) {
			cout << "Congradulations you won the game would you like to play again?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cin >> choice;
			if (choice == 1) {
				system("cls");
				main();
			}
			else {
				return 0;
			}
		}
		else if (citizens <= 0) {
			cout << "Sorry but you lost and your kingdom was destroyed" << endl;
			cout << "Want to try again?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cin >> choice;
			if (choice == 1) {
				system("cls");
				main();
			}
			else {
				return 0;
			}
		}

	}
	else {
		cout << "That is not a valid choice please select a proper choice." << endl;
		system("pause");
		system("cls");
		main();
	}

	system("pause");
	return 0;
}
