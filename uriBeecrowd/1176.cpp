#include <iostream>

using namespace std;

long long int fibonacci(long long int num){
	if (num == 0){
		return 0;
	}
	if (num == 1){
		return 1;
	}

	long long int acumulado[61];
	acumulado[0] = 0;
	acumulado[1] = 1;
	int i;

	for(i = 2; i <= num; i++){
		acumulado[i] = acumulado[i-1] + acumulado[i-2];
	}
	return acumulado[num];
}

int main(){
	
	int T;
	long long int N;
	cin>>T;

	for(int i=0; i<T; i++){
		cin>>N;
		cout<<"Fib("<<N<<") = "<<fibonacci(N)<<endl;
	}

	return 0;
}
