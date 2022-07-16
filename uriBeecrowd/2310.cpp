#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	int N;
	int S, S1, B, B1, A, A1;

	string name;
	float saquesTotais=0;
	float saquesCertos=0;
	float bloqueiosTotais=0;
	float bloqueiosCertos=0;
	float ataquesTotais=0;
	float ataquesCertos=0;

	cin>>N;

	for (int i=0; i<N; i++){
		cin>>name;
		cin>>S>>B>>A;
		cin>>S1>>B1>>A1;

		saquesTotais+=S;
		saquesCertos+=S1;
		bloqueiosTotais+=B;
		bloqueiosCertos+=B1;
		ataquesTotais+=A;
		ataquesCertos+=A1;
	}

	float saqueOut = (saquesCertos*100)/saquesTotais;
	float bloqueioOut = (bloqueiosCertos*100)/bloqueiosTotais;
	float ataqueOut = (ataquesCertos*100)/ataquesTotais;
	
	cout << fixed << setprecision(2);
	cout << "Pontos de Saque: "<<saqueOut<<" %."<<endl;
	cout << "Pontos de Bloqueio: "<<bloqueioOut<<" %."<<endl;
	cout << "Pontos de Ataque: "<<ataqueOut<<" %."<<endl;
	return 0;
}
