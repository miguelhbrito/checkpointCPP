#include <iostream>
#include <forward_list>

using namespace std;

int main (){

	forward_list<int> mylist = {20, 30, 40, 50};

	cout << "mylist:" ;
	for (int& x: mylist)  
		cout << " " << x; 
	std::cout <<endl;

	mylist.insert_after ( mylist.before_begin(), 11 );

  	cout << "inserted number 11 before begin, mylist now contains:";
  	for ( int& x: mylist )
		cout << ' ' << x;
  	cout <<endl;

  return 0;
}
