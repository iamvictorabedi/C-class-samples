#include <iostream>
using namespace std;

class area{
	public:
		void areaOfTriangle(){
			int b, h, area;
			cout<< "Enter your base \n";
			cin>> b;
			cout<<"Enter your height \n";
			cin>> h;
			area = 0.5 * b* h;
			cout<< "Area of your triangle is:" << area;
		}
};

int main(){
	area a;
	a.areaOfTriangle();
	return (0);
}
