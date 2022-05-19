#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    while (true){
        int sum = 0;
        int X,Y;
        
        cin>>X>>Y;
        if (X <= 0 || Y <= 0)
            break;
            
        for(int j=min(X,Y); j<=max(Y,X); j++){
           cout<<j<<" ";
           sum+=j;
        }
        
        cout<<"Sum="<<sum<<endl;
    }
    return 0;
}
