#include <iostream>

using namespace std;

int main(){
	
	int inicio;
	cin >> inicio;

	for ( int i = 0; i < 6; ){
		if ( inicio%2 != 0){
			cout << inicio << endl;
			i++;
		}	
		inicio+=1;
	}
	return 0;
}

