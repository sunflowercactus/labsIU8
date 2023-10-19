#include <iostream>
using namespace std;

//номер 1
//int main()
//{
	//int x; int y; int z;
	//cin >> x >> y >> z;
	//if (x % 2 == y % 2 == 1) {
	//	cout << "condition is true";
	//}
	//else {
	//	cout << "condition is false";
	//}
	
	//if ((x >= 20 and y < 20) or (x < 20 and y >= 20)) {
	//	cout << "condition is true";
	//}
	//else { cout << "condition is false"; }
	
	//if (x == 0 or y == 0) {
	//	cout << "conditionis true";
	//}
	//else { cout << "condition is false";}

	//if (x < 0 and y < 0 and z < 0) {
	//	cout << "condition is true";
	//}
	//else { cout << "condition is false"; }

	//if ((x % 5 !=0 and y % 5 != 0 and z % 5 == 0) or (z % 5 !=0 and y % 5 != 0 and x % 5 == 0) or (x % 5 !=0 and z % 5 != 0 and y % 5 == 0)) {
	//	cout << "condition is true";
	//}
	//else { cout << "condition is false"; }

	//if (x > 100 or y > 100 or z > 100) {
	//	cout << "condition is true";
	//}
	//else { cout << "condition is false"; }
	
	//return 0;
//}



//номер 3
//int main()
//{
//	int a;int i = 1;
//	cin >> a;
//	for (i; i < 10; i++) {
//		cout << a << " * " << i << " = " << a * i<<endl;
//	}
//	return 0;
//}



//номер 4
//int main() {
	/*int i = 8; int a=1;
	for (i; i < 16; i++) {
		a *= i;
	}
	cout << a;*/

	/*int a=1; int i; cin >> i;
	for (i; i < 21; i++) { a *= i; }
	cout << a;*/

	/*int i = 1; int a=1; int b; cin >> b;
	for (i; i < (b + 1); i++) { a *= i; }
	cout << a;*/

	/*int i; int a=1; int b; cin >> i>>b;
	for (i+1; i < (b + 1); i++) { a *= i; }
	cout << a;
	return 0;*/
//}

//номер 2
#include <cmath> // abs 

int main() {
	pair<unsigned char, unsigned char> positionA, positionB;

	cout << "Coordinates A: ";
	cin >> positionA.first >> positionA.second; 

	cout << "Coordinates B: ";
	cin >> positionB.first >> positionB.second; 

	if (positionA.first == positionB.first or positionA.second == positionB.second) {
		cout << "Ladia fights B" << endl;
	}

	if (abs(positionA.first - positionB.first) == abs(positionA.second - positionB.second)) {  // когда элементы матрицы находятся на одной диагонали? 
		cout << "Elephant fights B" << endl;
	}

	if (abs(positionA.first - positionB.first) <= 1 and abs(positionA.second - positionB.second) <= 1) {
		cout << "King can be on B" << endl;
	}

	if (positionA.first == positionB.first or positionA.second == positionB.second or
		abs(positionA.first - positionB.first) == abs(positionA.second - positionB.second)) {
		cout << "Ferz fights B" << endl;
	}

	if ((positionA.first == positionB.first && positionB.second == positionA.second + 1) || (positionB.first - positionA.first == 1 && abs(positionB.second - positionA.second) == 1)) {
		cout << "White peshka can be on B." << endl;
	}

	if (abs(positionB.first - positionA.first) == 1 && positionB.second - positionA.second == 1) {
		cout << "White peshka fights B." << endl;
	}
	return 0;

}