class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> arr;
        arr.push_back(1);

        for (int i=2; i<=n; i++){
            if (n % i == 0) {
                arr.push_back(i);
            }
        }

        if (k>arr.size()) return -1;
        else{
            return arr[k-1];
        }
    }
};
