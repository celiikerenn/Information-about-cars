#include <iostream>
using namespace std;

class carInfo {
	public:
	string name;
	int engine_power;
	int price;
	int oil_capacity;
	int age;
};

int main() {
	
	int n;
	cout << "What is the number of cars you want to enter a value for: ";
	cin >> n;
	cout << endl;
	
	carInfo cars[n];
	

	for(int i = 0;i<n;i++){
		cout << "Enter the value of the car:" << endl;
		cout << "Name: ";
		cin >> cars[i].name;
		cout << "Engine Power: ";
		cin >> cars[i].engine_power;
		cout << "Price: ";
		cin >> cars[i].price;
		cout << "Oil Capacity: ";
		cin >> cars[i].oil_capacity;
		cout << "Age: ";
		cin >> cars[i].age;
		cout << endl;
	}

	cout << "Entered Car Information:" << endl;
	cout <<"-----------------------"<< endl;
    for(int i = 0; i < n; i++) {
        cout << "Car " << i+1 << " Information" << endl;
        cout << "Name: " << cars[i].name << endl;
        cout << "Engine Power: " << cars[i].engine_power << endl;
        cout << "Price: " << cars[i].price << endl;
        cout << "Oil Capacity: " << cars[i].oil_capacity << endl;
        cout << "Age: " << cars[i].age << endl;
        cout << endl;

	}

	return 0;
}
