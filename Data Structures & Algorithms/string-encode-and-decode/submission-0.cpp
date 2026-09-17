class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (string& s : strs) {
            string no = to_string(s.size()) + "#";
            result.append(no);
            result.append(s);
        }

        return result;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> result;

        while (i < s.size()) {
            int j = i;

            string len = "";

            while (j < s.size() && s[j] != '#') {
                len += s[j];
                j++;
            }

            int length = stoi(len);

            result.push_back(s.substr(j + 1, length));

            i = j + 1 + length;
        }

        return result;
    }
};