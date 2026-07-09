class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

		std::unordered_map<char, int> freq_s, freq_t;

		for (char ch: s) {
			freq_s[ch]++;
		}

		for (char ch: t) {
			freq_t[ch]++;
		}

		return (freq_s == freq_t); 
    }
};
