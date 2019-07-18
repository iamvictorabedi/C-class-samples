#include <iostream>
using namespace std;
class addition {
	public:
		void addNumber(){
			int numb1, numb2, sum;
			numb1 = 20;
			numb2 = 30;
			sum = numb1 + numb2;
			cout<< "Answer is:" << sum << "\n";
		}
};

int main(){
	addition a;
	a.addNumber();
	return(0);
}
