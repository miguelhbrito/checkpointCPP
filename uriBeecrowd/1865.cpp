#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    
    for(int i = 0; i<N; i++){
        string name;
        int value;
        
        cin>>name>>value;
        if(name == "Thor"){
            cout<<"Y"<<endl;
        }else{
            cout<<"N"<<endl;
        }
    }
 
    return 0;
}
