#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> X;

	int N;
	cin>>N;

	for (int i=0; i<10 ; i++){
		if(i == 0){
			X.push_back(N);
		}else{
			X.push_back(X.at(i-1)*2);
		}
	}

	for (int i = 0; i < X.size(); i++){
		cout<<"N["<<i<<"] = "<<X.at(i)<<endl;
	}

	return 0;
}
