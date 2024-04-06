class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>st;
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            char c = s[i];
            if(c=='(')st.push({'(',i});
            else if (c==')'){
                if(st.empty())mp[i]++;
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            auto it = st.top();
            mp[it.second]++;
            st.pop();
        }
        string res="";
        for(int i=0;i<s.size();i++){
            if(mp[i]!=0)continue;
            res+=s[i];
        }
        return res;

    }
};