// input n string and write a program to find the longest common prefix string of all the strings.
// leetcode - 14

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // size of the vector
        int n = strs.size();

        // if vector size is 1
        if(strs.size() == 1){
            return strs[0];
        }

        // sorting the vectors
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[n-1];

        string s = "";
        for(int i=0; i<(min)(first.length(), last.length()); i++){
            if(first[i] == last[i]){
                s += first[i];
            }
            else{
                return s;
            }
        }
        return s;
    }
};