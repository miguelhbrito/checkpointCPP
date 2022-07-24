#include <iostream>

using namespace std;

int count=0;

int fib(int x) {
	count++;
    	if (x<2){
		return x;
	}else{
		return fib(x-1)+fib(x-2);
	}
}


int main(){
	int N, X;
	cin>>N;

	for(int i=0; i<N; i++){
		cin>>X;
		int res = fib(X);
		cout<<"fib("<<X<<") = "<<count-1<<" calls = "<<res<<endl;
		count=0;
	}
	return 0;
}
