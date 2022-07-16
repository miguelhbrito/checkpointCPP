#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(){
	
	vector<int> X;

	int N;
	for (int i=0; i<10; i++){
		cin>>N;
		if (N <= 0){
			X.push_back(1);
		}else{
			X.push_back(N);
		}
	}

	for (int i = 0; i < X.size(); i++){
		cout<<"X["<<i<<"] = "<<X.at(i)<<endl;
	}

	return 0;
}
