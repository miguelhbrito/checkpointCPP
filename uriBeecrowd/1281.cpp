#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	int N;
	map<string, float> myMap;
	cin>>N;

	for(int i=0; i<N; i++){
		int M, P;
		float valorFinal=0.0;
		cin>>M;
		for(int j=0; j<M; j++){
			string alimento;
			float valor;
			cin>>alimento>>valor;
			myMap[alimento] = valor;
		}

		cin>>P;
		for(int j=0; j<P; j++){
			string alimento;
			int qtd;
			cin>>alimento>>qtd;
			valorFinal+=(myMap[alimento]*qtd);
		}
		cout<<fixed<<setprecision(2);
		cout<<"R$ "<<valorFinal<<endl;
	}
	return 0;
}
