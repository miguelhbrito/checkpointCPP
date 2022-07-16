#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int X,Y;
    int sum=0;
    cin>>X;
    cin>>Y;
    
    for (int i=min(X,Y); i<=max(X,Y); i++){
        if(i%13 != 0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
 
    return 0;
}
