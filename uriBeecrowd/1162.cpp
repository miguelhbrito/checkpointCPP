#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N,L;
	cin>>N;

	for(int i=0; i<N; i++){
		vector<int> mV;
		int count=0;
		cin>>L;
		for(int j=0; j<L; j++){
			int vagao;
			cin>>vagao;
			mV.push_back(vagao);
		}

		for(int j=0; j<mV.size(); j++){
			for(int k=j+1; k<mV.size(); k++){
				if(mV[k]<mV[j]){
					int temp = mV[j];
					mV[j]=mV[k];
					mV[k]=temp;
					count++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
	}
	return 0;
}
