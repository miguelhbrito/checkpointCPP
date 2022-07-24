#include <iostream>
#include <sstream>
 
using namespace std;
 
int main() {
 
    stringstream ss;
    int decimal_value;
    cin>>decimal_value;
    ss<< hex << decimal_value; // int decimal_value
    
    string result ( ss.str() );
    cout<<result<<endl;
    return 0;
}
