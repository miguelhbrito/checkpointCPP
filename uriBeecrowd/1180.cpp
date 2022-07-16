#include <iostream>
 
using namespace std;
 
int main() {
    
    int N, pos;
    cin>>N;
    int X[N];
    
    int menor = 1000;
    
    for(int i=0; i<N; i++){
        cin >> X[i];
        
        if(X[i]<menor){
            menor = X[i];
            pos = i;
        }
    }
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<pos<<endl;
    
    return 0;
}
