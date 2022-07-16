#include <iostream>

using namespace std;

int main() {

    while(true){
        int X,Y;
        cin>>X>>Y;

        if( X==0 || Y==0)
            break;
        if(X > 0 && Y > 0){
            cout<<"primeiro"<<endl;
        }
        if(X > 0 && Y < 0){
            cout<<"quarto"<<endl;
        }
        if(X < 0 && Y > 0){
            cout<<"segundo"<<endl;
        }
        if(X < 0 && Y < 0){
            cout<<"terceiro"<<endl;
        }
    }

    return 0;
}
