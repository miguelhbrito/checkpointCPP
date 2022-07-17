#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin>>N;
	getchar();	
	for(int i=0; i<N; i++){
		string input;
		getline (cin, input);

		for(int j=0; j< input.length(); j++){
			if(isupper(input[j]) || islower(input[j])){
				input[j]+=3;
			}
		}
			
		reverse(input.begin(), input.end());

		int sizeMid = input.size()/2;
		for(int j=sizeMid; j<input.length(); j++){
			input[j]-=1;
		}

		cout<<input<<endl;
	}
	return 0;
}
