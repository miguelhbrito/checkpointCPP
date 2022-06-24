#include <iostream>
#include <queue>

using namespace std;
 
int main() {
 
    	while(true){
		int N;
		cin>>N;

		if(N == 0){
			break;
		}

		queue<int> myQ;
		for(int i=1; i<=N; i++){
			myQ.push(i);
		}

		cout<<"Discarded cards: ";
		while(myQ.size() > 1){
			if(myQ.size() == 2){
				cout<<myQ.front()<<endl;
			}else{
				cout<<myQ.front()<<", ";
			}
			myQ.pop();
			myQ.push(myQ.front());
			myQ.pop();
		}
		cout<<"Remaining card: "<<myQ.front()<<endl;
	}
	return 0;
}
