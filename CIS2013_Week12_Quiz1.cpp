#include <iostream>
#include <string>

using namespace std;

class house
{
	private:
		string color;
		int year=2000;
		int car_ports=3;
		int windows=20;
		int doors=3;

		


	public:

		void getcolor(){
			cout<<"Please select the color of your house (c) " << endl;
			cin>> color;
		}

		void getyear(){
			cout<<"Please select the year (y) " << endl;
			cin>> year;
		}
		
		void getcar_ports(){
			cout<<"Please enter number of car ports (C)" << endl;
			cin>> car_ports;
		}

		void getwindows(){
			cout<<"Please enter number of windows (w)" << endl;
			cin>> windows;
		}
		
		void getdoors(){
			cout<<"Please enter number of doors (d)" << endl;
			cin>> doors;
		}
	
		void print(){
			cout << color << " " << year << " " << car_ports << " " << windows << " " << doors << endl;
		}
		
		int getValueOfHouse(){
		int value=100000;
		value += ((2018-year) * -1000);
		value += (car_ports * 1000);
		value += (windows * 200);
		value += (doors * 1000);
		}

		
		



};

int main(){

	int c,y,C,w,d,p,v;
	char choice;


	house house;
	
	cout<<"Select and action: " <<endl;
	cout<<"Select color: (c) " << endl;
	cout<<"Select year: (y) " << endl;
	cout<<"Select # of car ports: (C) " << endl;
	cout<<"Select # of windows: (w) " << endl;
	cout<<"Select # of doors: (d) " << endl;
	cout<<"Print selections: (p) " << endl;
	cout<<"Show value of house (v) " << endl;

	house.getcolor();
	house.getyear();
	house.getcar_ports();
	house.getwindows();
	house.getdoors();
	house.print();
	house.getValueOfHouse();

	do{

	cout<<"Select and action: " <<endl;
	cout<<"Select color: (c) " << endl;
	cout<<"Select year: (y) " << endl;
	cout<<"Select # of car ports: (C) " << endl;
	cout<<"Select # of windows: (w) " << endl;
	cout<<"Select # of doors: (d) " << endl;
	cout<<"Print selections: (p) " << endl;
	cout<<"Show value of house (v) " <<endl;	
	cin>>choice;

	switch(choice){

		case 'c':
		house.getcolor();
		break;
		case 'y':
		house.getyear();
		break;
		case 'C':
		house.getcar_ports();
		break;
		case 'w':
		house.getwindows();
		break;
		case 'd':
		house.getdoors();
		break;
		case 'p':
		house.print();
		break;
		case 'v':
		house.getValueOfHouse();
		break;
		default:
		cout<<"Invalid entry " << endl;
		}
	}
	while(1);
		

	


	



	return 0;
}