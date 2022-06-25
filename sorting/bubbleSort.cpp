#include <iostream>
#include <array>

using namespace std;

int main(){
	array<int, 10> myarray = {34, 50, 2, 16, 77, 3, 31, 88, 13, 51};
	int temp;

	cout <<"Input list :\n";
   	for(int i = 0; i<myarray.size(); i++) {
      		cout <<myarray[i]<<"\t";
   	}
	cout<<endl;

	for(int i=0; i<myarray.size(); i++){
		for(int j=i+1; j<myarray.size(); j++){
			if(myarray[j]<myarray[i]){
				temp = myarray[i];
				myarray[i]=myarray[j];
				myarray[j]=temp;		
			}
		}
	}

	cout <<"Sorted Element List :\n";
	for(int i = 0; i<myarray.size(); i++) {
   		cout <<myarray[i]<<"\t";
	}
	cout<<endl;
	
	return 0;
}
