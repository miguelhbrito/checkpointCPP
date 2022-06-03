#include <iostream>
#include <array>

using namespace std;
 
int main() {
 
    int L; 
    while(cin>>L){
        array <int,500> V;
        for(int i=0; i<L; i++){
           cin>>V[i]; 
        }
        int maior = 0;
        for(int i = 0; i < L; i++){
            if (V[i] > maior){
                maior = V[i];
            }
        }
        if (maior < 10){
            cout<<"1"<<endl;
        }
        if (maior >= 10 && maior < 20){
            cout<<"2"<<endl;
        }
        if (maior >= 20){
            cout<<"3"<<endl;
        }
    }   
 
    return 0;
}
