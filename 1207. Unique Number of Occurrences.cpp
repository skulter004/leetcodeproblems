class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
          vector<int> ans;  
    sort(arr.begin() , arr.end());
    int s = arr.size();
    int cur = 1;
    for(int i = 0; i< s - 1; i++){
        if(arr[i] == arr[i+1]){

            cur++;
        }else{
             ans.push_back(cur);
            cur = 1;
        }
        if(i+1 == s - 1){
            ans.push_back(cur);
        }
    }
   int n=ans.size();
    sort(ans.begin() , ans.end());
    for(int i=0;i<n - 1;i++){
      if(ans[i]==ans[i+1])
            return false;
    }

    return true;
    }
};
