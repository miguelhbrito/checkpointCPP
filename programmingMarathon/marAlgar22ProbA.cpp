#include <iostream>

using namespace std;

int main(){
	int N, numbers;
	int jovem=0, adulta=0, idosa=0;
	cin>>N;

	for(int i=0; i<N; i++){
		cin>>numbers;
		if(numbers == 1){
			jovem++;
		}else if(numbers == 2){
			adulta++;
		}else if(numbers == 3){
			idosa++;
		}
	}
	cout<<"Jovem: "<<jovem<<endl;
	cout<<"Adulta: "<<adulta<<endl;
	cout<<"Idosa: "<<idosa<<endl;
	return 0;
}
