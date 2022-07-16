#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    int A = 0;
    int G = 0;
    int D = 0;
    bool flag = true;
 
    while(flag != false){
        cin>>N;
        switch(N){
            case 1:
                A++;
                break;
            case 2:
                G++;
                break;
            case 3:
                D++;
                break;
            case 4:
                flag = false; 
                break;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<A<<endl;
    cout<<"Gasolina: "<<G<<endl;
    cout<<"Diesel: "<<D<<endl;
    return 0;
}
