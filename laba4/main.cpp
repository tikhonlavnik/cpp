#include <iostream>
#include <string>
#include "Transport.h"
#include "Airplane.h"
#include "Car.h"

using namespace std;

int main()
{
    Transport a;
    Car b;
    Airplane c;
    Transport* ps[3];
    int average=0, i;
    ps[0]=&a;
    ps[1]=&b;
    ps[2]=&c;

int choice;
	do {
        cout << "Items: 1 - Abstract vehicle, 2 - Car, 3 - Airplane" << endl;
		cout << "1 - Find the newest vehicle: num ->\n";
		cout << "2 - Edit vehicle: num ->\n";
		cout << "3 - Show vehicles\n";
		cout << "0 - Exit\n";
		cin >> choice;

		switch (choice) {
		case 1:{
		    int o = ps[i]->getYear();
		    string tp;
            for (int i = 0; i < 3; i++ ) {
                if (o < ps[i]->getYear()) {
                    o = ps[i]->getYear();
                    tp = ps[i]->getType();
                }
            }
            cout << "The newest vehicle is " << tp << ". It was made in " << o << endl;
			break;
		}
		case 2: {
            int n2;
			cout << "num -> ";
			cin >> n2;
			if (n2 == 1) {
			cout << "Vehicle:" <<endl;
                ps[0]->setName();
                ps[0]->setType();
                ps[0]->setYear();
			} else if (n2 == 2) {
			cout << "Car:" <<endl;
                b.setName();
                b.setYear();
                b.setPower();
                b.setMark();
			} else if (n2 == 3) {
			cout << "airplane:" <<endl;
                c.setName();
                c.setYear();
                c.setCountry();
			} else {
                cout << "Unknown vehicle." << endl;
			}
            cout << endl;
			break;
		}
		case 3: {
                ps[0]->getInfo();
                cout << endl;
                ps[1]->getInfo();
                cout << endl;
                ps[2]->getInfo();
                cout << endl;
            cout << endl;
			break;
		}
		default:
			cout << "Off...";
		}
	} while (choice != 0);

	return 0;
}
