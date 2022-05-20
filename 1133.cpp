#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int X,Y;
    int sum=0;
    cin>>X;
    cin>>Y;

    for (int i=min(X,Y)+1; i<max(X,Y); i++){
        if(i%5 == 2 || i%5 == 3){
            cout<<i<<endl;
        }
    }

    return 0;
}
