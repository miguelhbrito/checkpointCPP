#include <iostream>
#include <stack>

using namespace std;

int main(){
	int K, count;
	count = 0;
	cin>>K;

	if(K<3){
		cout<<"N"<<endl;
	}
	for (int i = 2; i*i <= K; i++){
		if(K%i == 0){
			count++;
		}
	}
	if(count>1){
		cout<<"N"<<endl;
	}else{
		cout<<"S"<<endl;
	}
	return 0;
}
