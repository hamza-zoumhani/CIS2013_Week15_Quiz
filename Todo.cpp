#ifndef TODO_CPP
#define TODO_CPP

#include <iostream>
#include <string>

using namespace std;

class Todo{
	private:
	
		string list[100];
		int length=0;
		int next =0;
		
	public:
		Todo(){
			length = 0;
			next = 0;
		}
		
		void add(string action){
			list[next] = action;
			next++;
			length++;
		}
		
		void complete(){
			
		}
		
		void print(){
			for (int i=length; i<next; i++){
				cout << "Item " <<(i+1) << ": " << list[i] << endl;
			}
		}
			
};

#endif