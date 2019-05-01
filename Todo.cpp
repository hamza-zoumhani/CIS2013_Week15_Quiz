#include <iostream>
#include <string>

using namespace std;

class Todo{
	private:
	
		string list;
		int length;
		string item;
		
	public:
		void set_length(int l){length=l;}
		Todo(){
			set_length(0);
		}
		
		
		void add(string item);
		void done();
		void print();
			
};
