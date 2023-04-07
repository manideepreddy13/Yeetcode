//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

void isPrime(int n) {
    
    bool isp = true;
    
    if(n == 1){
        isp = false;
    } else{
        for (int i = 2; i <= sqrt(n); i++) {
        // code here
        if(n%i == 0){
            isp = false;
            break;
        }
    }
    
    }
    
    if(isp){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
cout << endl;

    
}

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        isPrime(n);
    }
    return 0;
}
// } Driver Code Ends