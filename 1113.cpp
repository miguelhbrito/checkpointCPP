#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    while (true){
        int X,Y;
        cin>>X>>Y;
        if (X == Y)
            break;

        if (min(X,Y) == X){
            cout<<"Crescente"<<endl;
        }else{
            cout<<"Decrescente"<<endl;
        }
        
    }
    return 0;
}
