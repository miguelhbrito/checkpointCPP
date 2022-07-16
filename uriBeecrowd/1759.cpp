#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    
    for( int i=1; i<=N; i++){
        cout<<"Ho";
        if( i == N ){
            cout<<"!"<<endl;
        }else{
            cout<<" ";   
        }
    }
 
    return 0;
}
