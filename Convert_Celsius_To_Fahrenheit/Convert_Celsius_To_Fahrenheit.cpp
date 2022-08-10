#include <iostream>

using namespace std;

int main() {

	// °C × 1.8 + 32 = °F
	float celsius;
	float fahrenheit;
		cout << "Convert Celcius to fahrenheit: ";
		cin >> celsius;

		fahrenheit = (celsius * 9/5) + 32;

		cout << "That is: " << fahrenheit << endl;



}