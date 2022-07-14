#include<iostream>
using namespace std;

void SubArraySum(int array[], int N, int S)
{
    // logic
    int tmp;
    for(int i=0; i<N; i++)
    {
        tmp = 0;
        for(int j=i; j<N; j++)
        {
            tmp += array[j];
            //cout << "for i= "<< i+1 << "j=" << j+1 << "sum="<< tmp <<endl;
            if(tmp == S)
            {
                cout << i+1 << " " << j+1 <<endl;
                return;
            }
            if(tmp > S)
            {
                break;
            }
        }
    }
    if(tmp != S)
        cout << -1 << endl;
}

int main(void)
{
    int T, N, S;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> N >> S;
        int array[N];
        // Take the array input rrom the user
        for(int i=0; i<N; i++)
            cin >> array[i];

        SubArraySum(array, N, S);

    }
    return 0;
}
