#include <iostream>
using namespace std;

// void function that may print out a menu for the customer
// will give you a 

bool isPrimeNumber(int number) {
	bool isPrimeFlag = true;
	for (int i = 2; i < number; i++)
		if (number % i == 0) {
			return false;  // This makes it simpler and easier to read

			/*isPrimeFlag = false;
			break;*/
	
	}
	return true;  // isPrimeFlag;
}
	
void main()
{
   // This will tell you if you have a prime number or not

	int number;

	cout << "Is your number a prime number or not?\nPlease enter your number: ";
	cin >> number;

	bool isPrimeFlag=isPrimeNumber(number);

	/* bool isPrimeFlag = true;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			isPrimeFlag = false;
			break;
		}
	} */

	if (isPrimeFlag)
		cout << "Prime number" << endl;
	else
		cout << "Not prime number" << endl;
	system("pause>0");
}
