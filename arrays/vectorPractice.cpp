#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	cout<<"Practicing vectors in C++"<<endl;
	vector<int> myVector{29, 19, 23, 60, 93};

	cout<<"Size: "<<myVector.size()<<endl;
	cout<<"Capacity: "<<myVector.capacity()<<endl;

	cout<<"Adding itens"<<endl;
	myVector.push_back(4);
	myVector.push_back(24);
	myVector.push_back(11);
	
	cout<<"Size: "<<myVector.size()<<endl;
	cout<<"Capacity: "<<myVector.capacity()<<endl;
	
	cout<<"Popping 1"<<endl;
	myVector.pop_back();

	cout<<"Size: "<<myVector.size()<<endl;
	cout<<"Capacity: "<<myVector.capacity()<<endl;

	cout<<"Itens"<<endl;
	for (int value : myVector){
		cout<< value << endl;
	}

	cout<<"Inserting at index 4"<<endl;
	myVector.insert(myVector.begin() + 4, 99);

	cout<<"Itens"<<endl;
	for (int value : myVector){
		cout<< value << endl;
	}

 	for (int i = 0; i < 75; i++) {
		myVector.push_back(i + 3);
	}

	cout<<"Size: "<<myVector.size()<<endl;
	cout<<"Capacity: "<<myVector.capacity()<<endl;

	cout<<"Collapsing"<<endl;
	myVector.shrink_to_fit();
	cout<<"Capacity: "<<myVector.capacity()<<endl;

	cout<<"Itens:"<<endl;
	for(unsigned long j = 0; j<myVector.size(); ++j){
		cout<<j<<": "<<myVector.at(j)<<endl;
	}

	cout <<"Erasing items from indices from 4 to 11"<<endl;
	myVector.erase(myVector.begin() + 4, myVector.begin() + 12);

	cout<<"Items"<<endl;
	for(unsigned long k = 0; k < myVector.size(); ++k){
		cout<<k<<": "<<myVector.at(k)<<endl;
	}

	return 0;
}
