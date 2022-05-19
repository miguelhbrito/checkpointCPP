#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, pos;
    int maior = 0;
    
    for (int i=0; i<100; i++){
        cin>>N;
        if (N > maior){
            maior = N;
            pos = i+1;
        }
    }
    cout<<maior<<endl;
    cout<<pos<<endl;
    
    return 0;
}
