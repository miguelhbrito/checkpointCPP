#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <iomanip>

using namespace std;

class Lugar {
	int pessoas;
	int consumo;
	double media;
	public :
		Lugar(int p, int c, int m){
			pessoas = p;
			consumo = c;
			media = m;
		}
		int getPessoas(){
			return pessoas;
		}
		int getConsumo(){
			return consumo;
		}
		int getMedia(){
			return media;
		}
};

bool OrdenaPorConsumoMedio(Lugar A, Lugar B){
	if(A.getMedia() < B.getMedia())
		return true;
	return false;
}
	
int main(){
	
	int num=0;
	int N;

	while (true){
		
		cin>>N;
		if (N == 0){
			break;
		}
		
		vector <Lugar> VL;
		vector <Lugar>::iterator ptr;	
		
		int pessoas, consumo;	
		int somaPessoas = 0;
		int somaConsumo = 0;
		int mediaConsumo;

		for(int i=0; i<N; i++){
			cin>>pessoas;
			cin>>consumo;
			VL.push_back(Lugar(pessoas, consumo, consumo/pessoas));
		}

		sort(VL.begin(), VL.end(), OrdenaPorConsumoMedio);
		num++;

		if (num > 1)
			cout<<endl;
		cout<<"Cidade# "<<num<<endl;

		for(auto ptr = VL.begin();ptr != VL.end(); ptr++){
			cout<<ptr->getPessoas()<<"-";
			cout<<(int)ptr->getMedia()<<" ";	
			somaPessoas+=ptr->getPessoas();
			somaConsumo+=ptr->getConsumo();
		}
	cout<<endl;
	mediaConsumo = somaConsumo*100/somaPessoas;	
	cout<<"Consumo medio: "<<mediaConsumo/100.0<<" m3."<<endl;
	}

	return 0;
}
