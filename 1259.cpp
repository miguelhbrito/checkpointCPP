#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 
int main() {
	int N, X;
	cin>>N;
	
	vector <int> even; 
	vector <int> odd;

	for(int i=0; i<N; i++){
		cin>>X;
		if(X%2 != 0){
			odd.push_back(X);
		}else{
			even.push_back(X);
		}
	}

	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());

	for(int i=0; i<even.size(); i++){
		cout<<even[i]<<endl;
	}
	for(int j=odd.size()-1; j>=0; j--){
		cout<<odd[j]<<endl;
	}
	return 0;
}
