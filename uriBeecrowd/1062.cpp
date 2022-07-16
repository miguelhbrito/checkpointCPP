#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;
 
int main() {
	 
 	int N, X, i;
	stack<int> mystack;

	while(true){
		cin>>N;
		if(N == 0){
			break;
		}
		for(int i=0; i<=N; i++){
			cin>>X;
			if( X == 0){i
				cout<<endl;
				break;
			}
			mystack.push(X);	
		}
		
	}
	return 0;
}
