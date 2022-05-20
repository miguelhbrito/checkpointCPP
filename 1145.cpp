#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,Y;
    cin>>X>>Y;
    
    for(int i=1; i<=Y;){
        for(int j=0; j<X; j++, i++){
            cout<<i;
	    if(j != X-1)
		cout<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}


