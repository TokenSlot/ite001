//Project ITE 001
//Paltera, Fonseca, Paragas
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <limits>

using namespace std;

//Receipt Responsive Dashes
void dasher(string str, float price);

//Menu Responsive Dots
void dotter(string str, float price);

//Returns Choose (x) and Displays List of chosen main ingredient
int getList(int choose, vector<string> &itemList, vector<float> &itemPrice, vector<string> &itemChoice, vector<float> &itemChoicePrice);

//Input Choose (for getlist function)
int getChoose(int &choose);

//Converts numerical value into string
template <typename T>string tostr(const T& t) {
	ostringstream os;
	os<<t;
	return os.str();
}

//Generates a random number
int randNum(int min, int max) {
	return rand() % max + min;
}

main() {
	//Declarations
	time_t now = time(0);
	char* dt = ctime(&now);
	
	vector<string> vChoice;
	vector<float> vPrice;
	
	vector<string> vGin;
	vGin.push_back("Artillery Cocktail");
	vGin.push_back("Earthquake");
	vGin.push_back("Flying Dutchman");
	vGin.push_back("Gibson");
	vGin.push_back("Gin and it");
	vGin.push_back("Long Drink");
	vGin.push_back("St. Germain Martini");
	vGin.push_back("Barrel Choke");
	vGin.push_back("Caruso #1");
	vGin.push_back("Cafe de Paris Cocktail");
	vGin.push_back("Fifty-Fifty");
	vGin.push_back("Hula-hula");
	vGin.push_back("Fare Thee Well Martini");
	vGin.push_back("Hearts on Fire");
	
	vector<float> vGinPrice;
	vGinPrice.push_back(127.51);
	vGinPrice.push_back(242.45);
	vGinPrice.push_back(132.27);
	vGinPrice.push_back(196.78);
	vGinPrice.push_back(235.27);
	vGinPrice.push_back(217.45);
	vGinPrice.push_back(672.2);
	vGinPrice.push_back(195.7);
	vGinPrice.push_back(403.32);
	vGinPrice.push_back(132.81);
	vGinPrice.push_back(245.03);
	vGinPrice.push_back(177.76);
	vGinPrice.push_back(172.39);
	vGinPrice.push_back(226.06);
	
	vector<string> vWhiskey;
	vWhiskey.push_back("T.N.T");
	vWhiskey.push_back("Barracuda");
	vWhiskey.push_back("Black Forest Cake");
	vWhiskey.push_back("Fire-wall");
	vWhiskey.push_back("Full Metal Jacket");
	vWhiskey.push_back("The Obama");
	vWhiskey.push_back("The Heim Lick");
	vWhiskey.push_back("Purgatory");
	vWhiskey.push_back("The Three Amigos");
	vWhiskey.push_back("Fatigue");
	vWhiskey.push_back("Final straw");
	vWhiskey.push_back("I See Dead People");
	vWhiskey.push_back("Prosecutor");
	vWhiskey.push_back("Pear Noel");
	
	vector<float> vWhiskeyPrice;
	vWhiskeyPrice.push_back(227.51);
	vWhiskeyPrice.push_back(330.52);
	vWhiskeyPrice.push_back(235.40);
	vWhiskeyPrice.push_back(375.75);
	vWhiskeyPrice.push_back(350.20);
	vWhiskeyPrice.push_back(299.99);
	vWhiskeyPrice.push_back(201.90);
	vWhiskeyPrice.push_back(221.11);
	vWhiskeyPrice.push_back(323.45);
	vWhiskeyPrice.push_back(243.66);
	vWhiskeyPrice.push_back(250.50);
	vWhiskeyPrice.push_back(242.44);
	vWhiskeyPrice.push_back(344.47);
	vWhiskeyPrice.push_back(369.69);
	
	vector<string> vVodka;
	vVodka.push_back("Bullshot");
	vVodka.push_back("Appletini");
	vVodka.push_back("Apple Bomb");
	vVodka.push_back("Black Russian");
	vVodka.push_back("Death Rattle");
	vVodka.push_back("Hole in One");
	vVodka.push_back("Kamikaze");
	vVodka.push_back("Pukie Goop");
	vVodka.push_back("Sun burn");
	vVodka.push_back("Corkscrew");
	vVodka.push_back("Cobra");
	vVodka.push_back("Kiss of an angel");
	vVodka.push_back("Mom's Milk");
	vVodka.push_back("I see nothing");
	vVodka.push_back("Mother-in-law");
	
	vector<float> vVodkaPrice;
	vVodkaPrice.push_back(127.56);
	vVodkaPrice.push_back(130.52);
	vVodkaPrice.push_back(135.40);
	vVodkaPrice.push_back(175.75);
	vVodkaPrice.push_back(150.32);
	vVodkaPrice.push_back(199.99);
	vVodkaPrice.push_back(101.90);
	vVodkaPrice.push_back(111.11);
	vVodkaPrice.push_back(123.45);
	vVodkaPrice.push_back(143.66);
	vVodkaPrice.push_back(150.50);
	vVodkaPrice.push_back(142.54);
	vVodkaPrice.push_back(144.47);
	vVodkaPrice.push_back(143.69);
	
	vector<string> vRum;
	vRum.push_back("Broken ankle");
	vRum.push_back("Quicky");
	vRum.push_back("Belly");
	vRum.push_back("Dragon's Mouth");
	vRum.push_back("Davy Jones' Locker");
	vRum.push_back("Jaguar");
	vRum.push_back("Martinique");
	vRum.push_back("My Sharona");
	vRum.push_back("Midnight Mass");
	vRum.push_back("Suffering Bastard");
	vRum.push_back("Stroll Through The Woods");
	vRum.push_back("BeBe");
	vRum.push_back("You can't catch me");
	vRum.push_back("Run, Run as fast as you can");
	
	vector<float> vRumPrice;
	vRumPrice.push_back(127.51);
	vRumPrice.push_back(130.52);
	vRumPrice.push_back(135.40);
	vRumPrice.push_back(175.75);
	vRumPrice.push_back(150.21);
	vRumPrice.push_back(199.99);
	vRumPrice.push_back(101.90);
	vRumPrice.push_back(111.11);
	vRumPrice.push_back(123.45);
	vRumPrice.push_back(143.66);
	vRumPrice.push_back(150.50);
	vRumPrice.push_back(142.65);
	vRumPrice.push_back(144.47);
	vRumPrice.push_back(143.69);
	
	vector<string> vTequilla;
	vTequilla.push_back("BTC");
	vTequilla.push_back("Black Cat");
	vTequilla.push_back("The Raging Bull");
	vTequilla.push_back("Easy Tiger");
	vTequilla.push_back("High Noon");
	vTequilla.push_back("Paloma");
	vTequilla.push_back("Sweet dreams");
	vTequilla.push_back("Del Rio");
	vTequilla.push_back("East of Eden");
	vTequilla.push_back("El Santo");
	vTequilla.push_back("Siesta");
	vTequilla.push_back("Untitled");
	vTequilla.push_back("Coup De Grace");
	vTequilla.push_back("Rio Grande");
	vTequilla.push_back("Uno, Dos, Tres");
	
	vector<float> vTequillaPrice;
	vTequillaPrice.push_back(127.51);
	vTequillaPrice.push_back(130.52);
	vTequillaPrice.push_back(135.40);
	vTequillaPrice.push_back(175.75);
	vTequillaPrice.push_back(150.05);
	vTequillaPrice.push_back(199.99);
	vTequillaPrice.push_back(101.90);
	vTequillaPrice.push_back(111.11);
	vTequillaPrice.push_back(123.45);
	vTequillaPrice.push_back(143.66);
	vTequillaPrice.push_back(150.50);
	vTequillaPrice.push_back(142.99);
	vTequillaPrice.push_back(144.47);
	vTequillaPrice.push_back(143.69);
	vTequillaPrice.push_back(144.47);
	
//	vector<string> vMix;
//	vMix.push_back("Egg");
//	vMix.push_back("Beef Broth");
//	vMix.push_back("Hot Sauce");
//	vMix.push_back("Beer");
//	vMix.push_back("Maggi Sauce");
//	vMix.push_back("Moonshine");
//	vMix.push_back("Orange Juice");
//	vMix.push_back("Limes");
//	vMix.push_back("Squid Ink");
//	vMix.push_back("Brandy");
//	vMix.push_back("Avocado");
//	vMix.push_back("Matcha Powder");
//	vMix.push_back("Lemon");
//	vMix.push_back("Coffee");
//	vMix.push_back("Apple cider");
//	vMix.push_back("Pineapple juice");
//	vMix.push_back("Iced tea");
//	vMix.push_back("Watermelon");
	

	int input = 3, index, choose;
	int i, myRand;
	float price, total = 0, payment, change;
	char another, upper = 'Y';
	string main;
	
	do {
		do {
			cout<<"----- Welcome to the Space Bar -----"<<endl;
			cout<<endl;
			cout<<"Choose the main ingredient"<<endl;
			cout<<"[0] Exit"<<endl;
			cout<<"[1] Gin"<<endl;
			cout<<"[2] Whiskey"<<endl;
			cout<<"[3] Vodka"<<endl;
			cout<<"[4] Rum"<<endl;
			cout<<"[5] Tequilla"<<endl;
			//cout<<"[6] Mix your own"<<endl<<endl; Not yet done!
			if (input < 0 || input> 5) {
				cout<<"Enter 0 to 5 only"<<endl;
			}
			cout<<"Input: ";
			cin>>input;
			
			switch(input) {
				case 0: cout<<endl<<"--Transaction Cancelled--"; exit(0); break;
				case 1: main = "Gin"; break;
				case 2: main = "Whiskey"; break;
				case 3: main = "Vodka"; break;
				case 4: main = "Rum"; break;
				case 5: main = "Tequilla"; break;
			}
			system("cls");
			
			cout<<"[0] Back"<<endl;
			if (main == "Gin") {

				choose = getList(choose,vGin,vGinPrice,vChoice, vPrice);
			} else if (main == "Whiskey") {

				choose = getList(choose,vWhiskey,vWhiskeyPrice,vChoice, vPrice);
			} else if (main == "Vodka") {

				choose = getList(choose,vVodka,vVodkaPrice,vChoice, vPrice);
			} else if (main == "Rum") {

				choose = getList(choose,vRum,vRumPrice,vChoice, vPrice);
			} else if (main == "Tequilla") {

				choose = getList(choose,vTequilla,vTequillaPrice,vChoice, vPrice);
			}
			system("cls");
		} while(input < 1 || input > 5 || choose== 0);
		
		cout<<"[Y] Buy Another"<<endl;
		cout<<"[N] Check Out"<<endl;
		cout<<"[C] Cancel"<<endl; 
		cout<<endl<<"Press other keys to go back."<<endl;
		cout<<"Input: ";
		cin>>another;
		upper = toupper(another);
		if (upper == 'Y' || upper == 'N') {
			total += vPrice.back();
		} else if (upper == 'C') {
			cout<<endl<<"--Transaction Cancelled--"; 
			exit(0);
		} else {
			upper = 'Y';
		}
		system("cls");
	} while(upper == 'Y');
	
	payment = total + 1;
	srand(time(0));
	
	//Payment
	do {
		myRand = randNum(1,4);
		if (payment < total) {
			switch (myRand) {
				case 1: cout<<"Add more"<<endl; break;
				case 2: cout<<"Insufficient balance."<<endl; break;
				case 3: cout<<"Not enough cash"<<endl; break;
				case 4: cout<<"You don't have enough money"<<endl; break;
			}
			
		}
		cout<<"Total: "<<total<<endl;
		cout<<"Payment: ";
		cin>>payment;
		system("cls");
	} while(payment < total);
	
	//Receipt
	cout<<"----------------------Receipt----------------------"<<endl<<endl;
	cout<<"PPF'S EVIL, INC."<<endl;
	cout<<"Space Bar"<<endl;
	cout<<"Tri-state Area"<<endl<<endl;
	cout<<"Trans Date: "<<dt<<endl<<endl;
	
	//Display Payment
	dasher("Payment", payment);
	cout<<endl;
	
	//Display Purchases
	cout<<"Purchases:"<<endl;
	for (index = 0; index < vChoice.size(); index++) {
		dasher(vChoice[index], vPrice[index]);
	}
	
	//Display Total
	for(i = 1; i <= 50; i++) {
			cout<<"-";
	}
	cout<<endl;
	dasher("Total",total);
	
	//Display Change
	change = payment - total;
	dasher("Change", change);
	cout<<endl<<"Thank you for purchasing. Enjoy!"<<endl;
}

//Receipt Responsive Dashes
void dasher(string str, float price) {
	string strPrice;
	int i, dashCount, dashMax = 50, len;
	strPrice = "P" + tostr(price);
	len = strPrice.length();
	cout<<str;
	dashCount = dashMax - (str.length() + len);
	for (i =1; i <= dashCount; i++) {
		cout<<"-";
	}
	cout<<strPrice<<endl;
}

//Menu Responsive Dots
void dotter(string str, float price) {
	string strPrice;
	int i, dashCount, dashMax = 35, len;
	strPrice = "P" + tostr(price);
	len = strPrice.length();
	cout<<str;
	dashCount = dashMax - (str.length() + len);
	for (i =1; i <= dashCount; i++) {
		cout<<".";
	}
	cout<<strPrice<<endl;
}

//Returns Choose (x) and Displays List of chosen main ingredient
int getList(int choose, vector<string> &itemList, vector<float> &itemPrice, vector<string> &itemChoice, vector<float> &itemChoicePrice){
	int index, x;
	for (index = 0; index < itemList.size(); index++) {
		cout<<"["<<index+1<<"] ";
		dotter(itemList[index], itemPrice[index]);
	}
	cout<<endl;
	cout<<"Enter the Number of your choice: ";
	x = getChoose(choose);
	if (x != 0) {
		itemChoice.push_back(itemList[x-1]);
		itemChoicePrice.push_back(itemPrice[x-1]);
	}
	return x;
}

//Input Choose (for getlist function)
int getChoose(int &choose){
	cin >> choose;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return 0;
	} else {
		return choose;
	}
}
