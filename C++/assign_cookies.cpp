class Solution {
public:
    /*
    vector<int>& sort(vector<int>& arr) {
        for(int i = 0; i < arr.size()-1; i++) {
            for(int j = i+1; j < arr.size(); j++) {
                if(arr[i] > arr[j]) {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
        
        return arr;
    }*/
    
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(g.empty() || s.empty()) return 0;
        
        //g = sort(g);
        //s = sort(s);
        sort(g.begin(),g.end());
		sort(s.begin(),s.end());
        int result = 0;
        int child_id = 0;
        
        for(int i = 0; i < s.size(); i++) {
            if(child_id >= g.size()) return result;
            if(s[i] >= g[child_id]) {
                result ++;
                child_id ++;
            }
        }
        
        return result;
    }
};
