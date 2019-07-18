#include <iostream> 
using namespace std; 
int main() 
{ 
   	char operation;
   	int value1, value2;
	cout<< "Hi welcome to simple calc. \n To get started please enter value 1 \n";
	cin>>value1; 
	cout<< "Please enter value 2 \n";
	cin>> value2;
	cout<< "Please select an operation (+ , -, x) \n";
	cin>> operation;    

switch (operation)  
    { 
        case '+': 
            cout <<"Sum of value 1 and 2= " << value1 + value2; 
            break; 
            case '-': 
            cout <<"Difference between value 1 and 2= " << value1 - value2; 
            break; 
              case 'x': 
            cout <<"When you multiply value 1 and 2 you get " << value1 * value2; 
            break; 
        default: 
            cout << "Winter is comming. Invalid couldnt do the math"; 
            break; 
    } 
    cout<<"\n Math is as easy as A,B,C";
} 
 
