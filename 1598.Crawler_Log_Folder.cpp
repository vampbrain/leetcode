//with regex

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        regex regex_folder("[a-zA-Z0-9]+/");
        regex regex_back("../");
        regex regex_current("./");

        for (const string& log : logs) {
            if (regex_match(log, regex_folder)) {
                depth++;
            } else if (regex_match(log, regex_back)) {
                if (depth > 0) depth--;
            }
        }
        return depth;
    }
};


//without regex

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        
        for (const string& log : logs) {
            if (log == "../") {
                if (depth > 0) depth--;
            } else if (log != "./") {
                depth++;
            }
        }
        
        return depth;
    }
};
