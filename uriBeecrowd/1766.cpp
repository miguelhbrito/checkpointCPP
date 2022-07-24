#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

/*
class Rena{
	string name;
	int peso, idade;
	float altura;

	public: 

	Rena(string n, int p, int i, float a){
		name = n;
		peso = p;
		idade = i;
		altura = a;
	};

	bool comparar(Rena A, Rena B){
		if(A.peso != B.peso){
			return (A.peso > B.peso);
		}else if(A.idade != B.idade){
			return (A.idade < A.idade);
		}else if(A.altura != B.altura){
			return (A.altura < B.altura);
		}else{
			return A.name < B.name;
		}	
	}
};*/

struct rena{
        string name;
        int peso; 
	int idade;
        float altura;
};


bool comparar(rena A, rena B){
	if(A.peso != B.peso){
		return (A.peso > B.peso);
	}else if(A.idade != B.idade){
		return (A.idade < B.idade);
        }else if(A.altura != B.altura){
		return (A.altura < B.altura);
        }else{
		return A.name < B.name;
        }
};

int main(){
	int T;
	cin>>T;

	vector<rena> vecRenas;
	int totalRenas, usarRenas, peso, idade;
	float altura;
	string name;

	for(int i=1; i<=T; i++){
		cin>>totalRenas>>usarRenas;
		for(int j=0; j<totalRenas;j++){
			cin>>name>>peso>>idade>>altura;
			rena r{name, peso, idade, altura};
			vecRenas.push_back(r);		
		}

		sort(vecRenas.begin(), vecRenas.end(), comparar);

		cout<<"CENARIO {"<<i<<"}"<<endl;
		
		for(int j=0; j<usarRenas; j++){
			cout<<j+1<<" - "<<vecRenas[j].name<<endl;
		}
		vecRenas.clear();
	}
	return 0;
}
