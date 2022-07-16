#include <iostream>
#include <iomanip>

using namespace std;

int main(){

        int N;
	int value = 1;
	
	while(cin >> N && N != 0){
		
        	double matrix[N][N];
        
		for (int i=0; i<N; i++){
                	for(int j=0; j<N; j++){
				if( i == 0 || j == 0 || i == N-1 || j == N-1){ 
					matrix[i][j] = value;
				}else{
					matrix[i][j] = value+1;
				}
                	}
        	}
		for (int i=0; i<N; i++){
                	for(int j=0; j<N; j++){
				if (j == 0){
					cout<<setw(3)<<matrix[i][j];
				}else{
					cout<<" "<<setw(3)<<matrix[i][j];
				}
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}
