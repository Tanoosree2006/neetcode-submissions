class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int res=0;
        for(auto x:operations){
            if(x=="+"){
                int top=st.top(); st.pop();
                int newtop=top+st.top();
                st.push(top);
                st.push(newtop);
                res+=newtop;
            }
            else if(x=="D"){
                st.push(2*st.top());
                res+=st.top();
            }
            else if(x=="C"){
                res-=st.top();
                st.pop();
            }
            else {
                st.push(stoi(x));
                res+=st.top();
            }
        }
        return res;
    }
};