#include <iostream>
#include <string>

using namespace std;

class Todo{
	private:
	
		string list;
		int length;
		string item;
		
	public:
		Todo();
		Todo(int l);
		
		void add(string item);
		void done();
		void print();
			
};
