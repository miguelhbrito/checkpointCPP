#include <iostream>

using namespace std;

int main(){
	int num;

	cout<<"Enter number of elements: "<<endl;
	cin>>num;	
	int myarray[num];
	cout<<endl<<"Enter the elements:"<<endl;
	for(int i=0; i<num; i++){
		cin>>myarray[i];
	}
	for(int i=1; i<num; i++){
		// Take the value from element
		int key = myarray[i];
		// Take the index from element
		int j = i;

		// Iterate within the elements to check if new member is lower than others elems
		while( j > 0 && myarray[j-1]>key){
			myarray[j]=myarray[j-1];
			j--;
		}
		// Put the value in the right position
		myarray[j] = key;
	}
	cout<<endl<<"Sorted array:"<<endl;
        for(int i=0; i<num; i++){
                cout<<myarray[i]<<"\t";
        }
	cout<<endl;

	return 0;
}
