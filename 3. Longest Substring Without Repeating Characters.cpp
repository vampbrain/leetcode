class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char> set;
        int left = 0; // Left boundary of the window
        int maxLength = 0; // Length of the longest substring

        for (int right = 0; right < s.length(); ++right) {
            char c = s[right];

            // If character is already in the set, move the left boundary of the window
            while (set.find(c) != set.end()) {
                set.erase(s[left]); // Remove the character at the left boundary
                ++left; // Move the left boundary to the right
            }

            set.insert(c); // Add the new character to the set
            maxLength = max(maxLength, right - left + 1); // Update the maximum length
        }

        return maxLength;
    }
};
3. Longest Substring Without Repeating Characters
