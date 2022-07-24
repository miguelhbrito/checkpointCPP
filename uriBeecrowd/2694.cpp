#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int N;
    cin>>N;
    
    for(int i=0; i<N; i++){
        string input;
        cin>>input;
        
        string s1,s2,s3;
        s1 = input.substr(2,2);
        s2 = input.substr(5,3);
        s3 = input.substr(11);
        
        int n1 = stoi(s1);
        int n2 = stoi(s2);
        int n3 = stoi(s3);
        
        cout<<n1+n2+n3<<endl;
    }
 
    return 0;
}
