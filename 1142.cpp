#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    int aux=1;
    cin>> N;
    
    for(int i=0; i<N; i++){
        cout<<aux<<" "<<aux+1<<" "<<aux+2<<" "<<"PUM"<<endl;
        aux+=4;
    }
 
    return 0;
}
