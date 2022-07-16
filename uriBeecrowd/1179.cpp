#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(){
	
	int mvImpar[5];
	int mvPar[5];

	int N;
	int indexPar = 0;
	int indexImpar = 0;

	for (int i=0; i<15; i++){
		cin>>N;
		if(N%2 == 0){
			mvPar[indexPar] = N;
		       indexPar++;	
		} else {
			mvImpar[indexImpar] = N;
			indexImpar++;
		}

		if(indexPar == 5){
			int auxPar = 0;	
	       		while(auxPar != 5){ 
				cout<<"par["<<auxPar<<"] = "<<mvPar[auxPar]<<endl;
				auxPar++;
			}
			indexPar = 0;
		}
		if(indexImpar == 5){
			int auxImpar = 0;
			while(auxImpar != 5){
				cout<<"impar["<<auxImpar<<"] = "<<mvImpar[auxImpar]<<endl;
				auxImpar++;
			}
			indexImpar = 0;
		}

		if (i==14){
			int auxFinal = 0; 
			while(auxFinal < indexImpar){
				cout<<"impar["<<auxFinal<<"] = "<<mvImpar[auxFinal]<<endl;
				auxFinal++;
			}
			auxFinal = 0;
			while(auxFinal < indexPar){
				cout<<"par["<<auxFinal<<"] = "<<mvPar[auxFinal]<<endl;
				auxFinal++;
			}

		}

	}
	return 0;
}
