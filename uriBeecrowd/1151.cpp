#include <iostream>

using namespace std;

int main(){
	
	int N;
	int fib[46];

	cin>>N;

	fib[0] = 0;
	fib[1] = 1;

	cout<<fib[0]<<" "<<fib[1]<<" ";
	for(int i=2; i<N; i++){
		fib[i] = fib[i-1] + fib[i-2];
		cout<<fib[i];
		if(i != N-1)
			cout<<" ";	
	}
	cout<<endl;
	return 0;
}