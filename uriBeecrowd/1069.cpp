#include <iostream>
#include <stack>
#include <string>

using namespace std;
 
int main() {
	
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		stack<char> mystack;
		
		string S;
		cin>>S;	
	
		int count = 0;

		for(int j=0; j<S.size(); j++){
			if(S[j] =='<'){
				mystack.push(S[j]);	
			}
			if(S[j] =='>' && !mystack.empty()){
				mystack.pop();
				count++;
			}
		}
		cout<<count<<endl;

	}
	
	return 0;
}
