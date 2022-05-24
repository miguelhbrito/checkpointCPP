#include <iostream>

using namespace std;

int main(){
	
	int N, X, Y, sum;

	cin>>N;

	for (int i=0; i<N; i++){
		sum = 0;
		cin>>X>>Y;
		for(int j=0; j<Y;){
			if(X%2 != 0){
				sum+=X;
				j++;
			}
			X++;
		}	
		cout<<sum<<endl;
	}

	return 0;
}

