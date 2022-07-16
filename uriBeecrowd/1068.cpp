#include <iostream>
#include <stack>
#include <string>

using namespace std;
 
int main() {
 
 	string N;
	
	while(cin>>N){

		stack<char> mystack;

		for(int i=0; i<N.size(); i++){
			if(N[i] == '('){
				mystack.push(N[i]);
			}
			if(N[i] == ')'){
				if(!mystack.empty()){
					mystack.pop();
				}else{
					mystack.push(N[i]);
				}			
			}
		}
		if(mystack.empty()){
			cout<<"correct"<<endl;
		}else{
			cout<<"incorrect"<<endl;
		}

	}
    	return 0;
}
