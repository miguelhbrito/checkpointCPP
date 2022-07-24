/*
 * Complete the 'circularArrayRotation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER k
 *  3. INTEGER_ARRAY queries
 */

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    for(int i =0 ; i<k; i++){
        int temp;
        temp = a.back();
        a.pop_back();
        a.insert(a.begin(), temp);
    }
    
    for(int i =0; i<queries.size(); i++){
        int position = queries[i];
        queries[i]=a[position];
    }
    return queries;
}
