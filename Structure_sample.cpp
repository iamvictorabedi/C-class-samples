#include <iostream>
using namespace std;

struct Employee {
    char name[255];
    char qualification[255];
    char address[255];
    int age;
    int telephoneNumber;
};

int main() {
    Employee one, two, three;
    //Employee one
    cout<< "Capturing Details of Employee One \n";
    cout<< "Enter Employee name \n";
    cin>>one.name;
    cout<< "Enter Employee qualification \n";
    cin>>one.qualification;
    cout<< "Enter Employee address \n";
    cin>>one.address;
    cout<< "Enter Employee age \n";
    cin>>one.age;
    cout<< "Enter Employee Telephone Number \n";
    cin>>one.telephoneNumber;
    //Employee two
     cout<< "Capturing Details of Employee Two \n";
    cout<< "Enter Employee name \n";
    cin>>two.name;
    cout<< "Enter Employee qualification \n";
    cin>>two.qualification;
    cout<< "Enter Employee address \n";
    cin>>two.address;
    cout<< "Enter Employee age \n";
    cin>>two.age;
    cout<< "Enter Employee Telephone Number \n";
    cin>>two.telephoneNumber;
    
    //Employee three
     cout<< "Capturing Details of Employee Three \n";
    cout<< "Enter Employee name \n";
    cin>>three.name;
    cout<< "Enter Employee qualification \n";
    cin>>three.qualification;
    cout<< "Enter Employee address \n";
    cin>>three.address;
    cout<< "Enter Employee age \n";
    cin>>three.age;
    cout<< "Enter Employee Telephone Number \n";
    cin>>three.telephoneNumber;
    
    //Displaying Records
    cout<< "\n Displaying infomation." <<endl;
    cout<< "Employee one Record, Name: "<< one.name<< " Age: "<<one.age <<" Qualification: "<< one.qualification<< " Address: "<<one.address<< " Telephone Number: "
    << one.telephoneNumber<<endl;
    cout<< "Employee two Record, Name: "<< two.name<< " Age: "<<two.age <<" Qualification: "<< two.qualification<< " Address: "<<two.address<< " Telephone Number: "
    << two.telephoneNumber<<endl;
    cout<< "Employee three Record, Name: "<< three.name<< " Age: "<<three.age <<" Qualification: "<< three.qualification<< " Address: "<<three.address<< " Telephone Number: "<< three.telephoneNumber<<endl;
	return 0;
}
