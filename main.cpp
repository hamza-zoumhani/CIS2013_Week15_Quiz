#include <iostream>
#include <string>
#include "Todo.cpp"

using namespace std;

int main(){
	char choice;
	string item;
	
	cout << "Length of the list: ";
	int l;
	cin >> l;
	
	Todo list(l);
	
	
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
				cout <<"Item: ";
				cin >> item;
				list.add(item);
				break;
			
			case 'd':
				list.done();
				break;
				
			case 'p':
				list.print();
				break;
				
			case 'x':
				cout << "Exiting...";
				break;
			
			default:
				cout << "invalid selection..." << endl;
				break;
		}
	}
	return 0;
}