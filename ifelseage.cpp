#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Enter year age \n";
	cin >> age;
	if (age<20 ){
	cout << "teenager \n";
	} else if(age< 13) {
		cout << "about to reach teen-age\n";
	}else{
		cout << "teen age crossed \n";
	}
}
