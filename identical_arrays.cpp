    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
         unordered_map<int, int> freqA, freqB;
    for (int i = 0; i < N; i++) {
        freqA[A[i]]++;  // increment frequency of element in array A
        freqB[B[i]]++;  // increment frequency of element in array B
    }
    for (auto& p : freqA) {
        int element = p.first;
        int freq = p.second;
        if (freqB[element] != freq) {
            return false;  // element frequency is different in both arrays
        }
    }
    return true;  // arrays are equal
}
    
     
