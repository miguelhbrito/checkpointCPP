#include <iostream>

using namespace std;

int main(){

        int N;
        int fat = 1;

        cin>>N;

        for(int i=0; i<(N-1); i++){
        	fat*=(N-i);
	}
        cout<<fat<<endl;
        return 0;
}
