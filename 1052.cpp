#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main(){
	
	map <int, string> meses;
	map <int, string>::iterator itr;

	meses.insert(pair<int,string>(1,"January"));
	meses.insert(pair<int,string>(2,"February"));
	meses.insert(pair<int,string>(3,"March"));
	meses.insert(pair<int,string>(4,"April"));
	meses.insert(pair<int,string>(5,"May"));
	meses.insert(pair<int,string>(6,"June"));
	meses.insert(pair<int,string>(7,"July"));
	meses.insert(pair<int,string>(8,"August"));
	meses.insert(pair<int,string>(9,"September"));
	meses.insert(pair<int,string>(10,"October"));
	meses.insert(pair<int,string>(11,"November"));
	meses.insert(pair<int,string>(12,"December"));

	int mes;
	cin >> mes;

	itr = meses.find(mes);
	
	if (itr != meses.end()){
		cout<<itr->second<<endl;
	}	

	return 0;
}








