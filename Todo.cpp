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
		
		Todo(int len);
		
		void add(string item);
		void done();
		void done(int n);
		void print();
		
		
		
};
