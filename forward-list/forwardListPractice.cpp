#include <iostream>
#include <forward_list>
#include <functional>
#include <array>
#include <iterator>
#include <cmath>

using namespace std;

// a binary predicate implemented as a function:
bool same_integral_part (double first, double second)
{ return ( int(first)==int(second) ); }

// a binary predicate implemented as a class:
class is_near_class
{
public:
  bool operator() (double first, double second)
  { return (fabs(first-second)<5.0); }
} is_near_object;


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

	cout<< "using end() with iterator:";
	for ( auto it = mylist.begin(); it != mylist.end(); ++it){
		cout<< ' ' << *it;
	}
	cout<< endl;	
	
	forward_list<int> mylist2 = {56, 2, 16, 77};

  	mylist2.front() = 11;

  	cout << "mylist2 now contains:";
  	for ( int& x : mylist2 ){
		cout << ' ' << x;
	}
  	cout << endl;
  	
	array<int,3> myarray = { 11, 22, 33 };
  	forward_list<int> mylist3;
  	forward_list<int>::iterator it2;

  	it2 = mylist3.insert_after ( mylist3.before_begin(), 10 );          
                                                                   
  	it2 = mylist3.insert_after ( it2, 2, 20 );                          
                                                                   
  	it2 = mylist3.insert_after ( it2, myarray.begin(), myarray.end() ); 
                                                                   
  	it2 = mylist3.begin();                                             
  	it2 = mylist3.insert_after ( it2, {1,2,3} );                        
                                                                   

  	cout << "mylist3 contains:";
  	for (int& x: mylist3){
		 cout << ' ' << x;
	}
  	cout << endl;
	
	forward_list<int> mylist4 = {10, 20, 30, 40, 50};
	                                           // 10 20 30 40 50
	auto it = mylist4.begin();                 // ^

  	it = mylist4.erase_after(it);              // 10 30 40 50
                                                   //    ^
  	it = mylist4.erase_after(it,mylist.end()); // 10 30
                                                   //       ^
	cout << "mylist4 contains:";
  	for (int& x: mylist4){
		cout << ' ' << x;
	}  	
	cout << endl;
	
	forward_list<int> mylist5 = {77, 2, 16};
  	mylist5.push_front (19);
  	mylist5.push_front (34);

  	cout << "mylist5 contains:";
  	for (int& x: mylist5){
		cout << ' ' << x;
	}  	
	cout << endl;
	
	forward_list<int> mylist6 = {10, 20, 30, 40};

	cout << "Popping out the elements in mylist6:";
	while (!mylist6.empty()){
    		cout << ' ' << mylist6.front();
	    	mylist6.pop_front();
	}
	cout << endl;

	forward_list<int> mylist7 = {10, 20, 30, 40, 30, 20, 10};

	mylist7.remove(20);

	cout << "mylist7 contains:";
	for (int& x: mylist7){
    		cout << ' ' << x;
	}
	cout << endl;
	
	forward_list<double> mylist8 = { 15.2, 73.0, 3.14, 15.85, 69.5, 73.0, 3.99, 15.2, 69.2,  18.5 };
	mylist8.sort();                       //   3.14,  3.99, 15.2, 15.2, 15.85
        	                              //  18.5,  69.2,  69.5, 73.0, 73.0
	mylist8.unique();                     //   3.14,  3.99, 15.2, 15.85
               		                      //  18.5,  69.2,  69.5, 73.0
	mylist8.unique (same_integral_part);  //  3.14, 15.2, 18.5,  69.2, 73.0

	mylist8.unique (is_near_object);      //  3.14, 15.2, 69.2

	cout << "mylist8 contains:";
	for (double& x: mylist8){
    		cout << ' ' << x;
	}
	cout <<endl;	
	
	forward_list<double> first = {4.2, 2.9, 3.1};
	forward_list<double> second = {1.4, 7.7, 3.1};
	forward_list<double> third = {6.2, 3.7, 7.1};

	first.sort();
	second.sort();
	first.merge(second);

	cout << "first contains:";
	for (double& x: first){
    		cout << " " << x;
	}
	cout << endl;

	first.sort (greater<double>());
	third.sort (greater<double>());
	first.merge (third, greater<double>());

	cout << "first contains:";
	for (double& x: first){
    		cout << " " << x;
	}
	cout <<endl;

	forward_list<int> mylist9 = {22, 13, 5, 40, 90, 62, 31};

	mylist9.sort();

	cout << "default sort (operator<):";
	for (int& x: mylist9){
    		cout << ' ' << x;
	}
	cout << endl;

	mylist9.sort(greater<int>());

	cout << "sort with greater():";
	for (int& x: mylist9){
    		cout << ' ' << x;
	}
	cout << endl;	

	return 0;
}
