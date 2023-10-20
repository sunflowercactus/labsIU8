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

int main(){
	pair<int, int> positionA, positionB;
	
	cout << "Enter coordinates positionA: ";
	cin>>positionA.first>>positionA.second; // don't need ">>endl;"
	
	cout << "Enter coordinates positionB: ";
	cin >> positionB.first >> positionB.second; // don't need ">>endl;"
	
	if ((positionA.first > 0 && positionA.first < 9) && (positionA.second > 0 && positionA.second < 9) && 
	   (positionB.first > 0 && positionB.first < 9) && (positionB.second > 0 && positionB.second < 9) ){

		if (positionA.first == positionB.first || positionA.second == positionB.second){
			cout << "Ladia fights positionB." << endl;
		}
		
		if (abs(positionA.first-positionB.first) == abs(positionA.second-positionB.second)) { 
			cout << "Elephant fights positionB." << endl;
		}
		
		if (abs(positionA.first-positionB.first) <=1 && abs(positionA.second-positionB.second) <=1){
			cout << "King can fight positionB." << endl;
			}
			
		if (positionA.first == positionB.first || positionA.second == positionB.second || 
		abs(positionA.first-positionB.first) == abs(positionA.second-positionB.second)) {
			cout << "Ferz fights positionB." << endl;
		}
		
		
		if ((positionA.first == positionB.first && positionB.second == positionA.second + 1) ) {
	        	cout << "White peshka can fight positionB." << endl;
	        }
	        
	    else if (abs(positionB.first - positionA.first) == 1 && positionB.second - positionA.second == 1) {
		cout << "White peshka fights positionB." << endl;	
		}
		
		else if((positionA.second == 2) && positionA.first == positionB.first && (positionB.second == positionA.second + 2)){
			cout<<"White peshka goes through 2 pols."<<endl;
		}
		else{
			cout<<"Dont go!"<<endl;
		}
	}
	
	else cout << "Coordinates dont match";
    return 0;
		
}
