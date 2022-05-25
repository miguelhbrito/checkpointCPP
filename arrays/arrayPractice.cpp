#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
	
	array<int,5> myarray = { 50, 77, 16, 34, 2};
	
	cout << "myarray contains:";

	for( auto it = myarray.begin(); it != myarray.end(); ++it){
		cout<< ' ' << *it;
	}
	cout<<endl;

	cout << "myarray reverse contains:";

	for( auto rit = myarray.rbegin(); rit < myarray.rend(); ++rit){
		cout<<' '<< *rit;
	}
	cout<< endl;
	
	cout<< "size of myarray: "<<myarray.size()<<endl;
	cout<< "max_size of myarray: "<<myarray.max_size()<<endl;
	
	cout<< "front is: "<< myarray.front()<< endl;
	cout<< "back is: "<< myarray.back()<< endl;
	
	cout<< "type of data from myarray: "<< myarray.data()<<endl;
	
	cout<< "using at() func, myarray at 3 index: "<< myarray.at(3)<<endl;

	array<int, 5> myarray2;
	myarray2.fill(5);

	cout<< "myarray2 contains(with func fill):";
	for( int& x : myarray2 ){
		cout<< ' ' <<x;
	}
	cout<<endl;
	
	myarray.swap(myarray2);
	
	cout<< "myarray swapped with myarray2, myarray now contains:";
	for( int&x : myarray){
		cout<< ' ' <<x;
	}	
	cout<<endl;
	
	cout<< "sort func to myarray2:";
	sort(myarray2.begin(), myarray2.end());
	for( int&x : myarray2){
		cout<< ' '<<x;
	}
	cout<<endl;
	
	array<int, 8> myarray3 = {32, 71, 12, 45, 26, 80, 53, 33};
	
	cout<< "myarray3 contains:";
	for( int&x : myarray3){
		cout<< ' '<<x;
	}
	cout<<endl;

	sort(myarray3.begin(), myarray3.begin()+4);

	cout<< "sorting only the 4 elements from myarray3:";
	for( auto it = myarray3.begin(); it < myarray3.end(); ++it){
		cout<< ' ' << *it;
	}
	cout<<endl;

	return 0;
}
