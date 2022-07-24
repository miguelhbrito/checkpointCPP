#include <iostream>

using namespace std;

int main(){
	int N;
	cin>>N;

	if(N < 2){
		cout<<"definitivamente nao primo"<<endl;
		return 0;
	}
	for(int i = 2; i*i <= N; i++){
		if(N%i == 0){
			cout<<"definitivamente nao primo"<<endl;
			return 0;
		}
	}
	cout<<"talvez"<<endl;
	return 0;
}
