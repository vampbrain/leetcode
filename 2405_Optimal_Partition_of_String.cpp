class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>char_set;

        int partition = 1;

        for (char c: s){
            if (char_set.find(c)!=char_set.end()){
                partition++;
                char_set.clear();
            }
            char_set.insert(c);
        }

        return partition;
    }
};
