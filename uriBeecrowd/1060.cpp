#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	double num;
	int positiveValues=0;

	for (int i=0;i<6;i++ ){
		cin>>num;
		if(num>0){
			positiveValues+=1;
		}
	}

	cout<<positiveValues<<" valores positivos"<<endl;
	return 0;
	
}

