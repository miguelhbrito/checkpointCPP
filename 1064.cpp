#include <iostream>


int main(){
	
	double num;
	int positiveValues=0;
	double sum=0;
	
	for (int i=0; i<6 ; i++){
		cin>>num;
		if(num>0){
			positiveValues+=1;
			sum+=num;
		}
	}

	cout<<positiveValues<<" valores positivos"<<endl;
	cout<<fixed<<setprecision(1);
	cout<<sum/positiveValues<<endl;
	
	return 0;

}

