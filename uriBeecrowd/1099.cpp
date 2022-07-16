#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int N;
    int sum = 0;
    int X,Y;
    
    cin>>N;
    
    for (int i=0; i<N; i++){
        cin>>X>>Y;
        for(int j=min(X,Y)+1; j<max(Y,X); j++){
            if(j%2 != 0){
                sum+=j;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
 
    return 0;
}
