#include <iostream>
#include <string>
#include "Todo.cpp"

using namespace std;

int main(){
	char choice;
	int len=0;
	
	while (choice !='x'){
		cout << endl;
		cout << "Add to list (a)." << endl;
		cout << "Done list item (d)." << endl;
		cout << "Print list (p)." << endl;
		cout << "Exit list app (x)." << endl;
		cout << "What do you want to do: ";
		cin >> choice;
		cout << endl;
		
		switch(choice){
			case 'a':
				
				break;
			
			case 'd':
			
				break;
				
			case 'p':
				
				break;
				
			case 'x':
				
				break;
			
			default:
				cout << "invalid selection..." << endl;
				break;
		}
	}
	return 0;
}