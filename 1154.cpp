#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float sum = 0;
    int count = 0;
    int N;
    
    while(true){
        cin>>N;
        if(N<0){
            break;
        }else{
            count++;
            sum+=N;
        }
    }
    
    cout<<fixed<<setprecision(2);
    cout<<(sum/count)<<endl;
    
    return 0;
}
