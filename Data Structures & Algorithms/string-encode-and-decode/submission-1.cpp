class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded = "";
        
        // Loop through each word in the list
        for (const string& s : strs) {
            // Attach the word's length, a '#', and the word itself
            encoded += to_string(s.length()) + "#" + s;
        }
        
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        
        while (i < s.length()) {
            // Find the '#' starting from index i
            int hashPos = s.find('#', i);
            
            // Extract the number before '#' and convert it to an integer
            int length = stoi(s.substr(i, hashPos - i));
            
            // Extract the exact number of characters after '#'
            string word = s.substr(hashPos + 1, length);
            result.push_back(word);
            
            // Move the pointer to the start of the next length prefix
            i = hashPos + 1 + length;
        }
        
        return result;
    }
};
