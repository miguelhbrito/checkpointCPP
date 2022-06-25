#include <iostream>

using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int array[], int size){
	for( int i=0; i<size; i++){
		cout<< array[i] << " ";
	}
	cout<<endl;
}

void selectionSort(int array[], int size){
	// One by one move boundary of 
    	// unsorted subarray
	for( int i=0; i<size-1; i++){
		// Find the minimum element in
        	// unsorted array 
		int min_idx = i;
		for(int j = i+1; j<size; j++){
			// To sort in descending order, change > to < in this line.
      			// Select the minimum element in each loop.
			if(array[j] < array[min_idx]){
				min_idx = j;
			}		
		}
		// put min at the correct position
		swap(&array[min_idx], &array[i]);
	}
}

int main(){
	int data[] = {20, 95, 12, 80, 5};
	int size = sizeof(data) / sizeof(data[0]);
	selectionSort(data, size);
	cout << "Sorted array in asc ord: "<<endl;
	printArray(data, size);
	return 0;
}
