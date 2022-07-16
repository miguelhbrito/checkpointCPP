#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
	
	vector<int> N;
	int value;

	for(int i=0; i < 20; i++){
		cin>>value;
		N.push_back(value);
	}
	
	for(int i=0; i < 10; i++){
		swap(N.at(i),N.at(19-i));
	}

	for(int i=0; i < N.size(); i++){
		cout<<"N["<<i<<"] = "<<N.at(i)<<endl;
	}

	return 0;
}
