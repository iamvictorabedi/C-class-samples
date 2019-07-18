#include <iostream>
using namespace std;

struct Person {
char name[50];
int age;
float salary;
};

int main() {
Person p1;
cout<< "Enter Full name: \n";
cin.get(p1.name,50);
cout<< "Enter Age: \n ";
cin>> p1.age;
cout<< "Enter Salary: \n";
cin>>p1.salary;
cout<< "\n Displaying infomation." <<endl;
cout<< "Name: "<< p1.name <<endl;
cout<< "Age: "<< p1.age <<endl;
cout<< "Salary: "<< p1.salary <<endl;
return 0;
}
