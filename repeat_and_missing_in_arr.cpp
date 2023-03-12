//Brute Solution
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int a,b;
    int i,j;
    int count;

    for(i = 1; i<=A.size();i++){
        count = 0;
        for(j=0;j<A.size();j++){
            if(A[j] == i){
                count++;
            }
        }

        if(count == 2){
            a = i;
        } else if(count == 0) {
            b = i;
        }
    }
    
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    
    return vec;
}
