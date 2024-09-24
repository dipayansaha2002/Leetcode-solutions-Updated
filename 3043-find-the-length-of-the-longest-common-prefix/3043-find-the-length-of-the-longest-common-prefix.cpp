class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int maxi = 0;
        unordered_map<int, bool> umap;
        for(int i = 0; i < arr1.size(); i++){
            while(arr1[i]){
                umap[arr1[i]] = true;
                arr1[i] /= 10;
            }
        }
        int num = 0;
        for(int i = 0; i < arr2.size(); i++){
            if(arr2[i] < num) continue;
            while(arr2[i]){
                if(umap.find(arr2[i]) != umap.end()) 
                    if(arr2[i] > num){
                        num = arr2[i]; 
                        maxi = to_string(arr2[i]).size(); 
                        break;
                    } 
                arr2[i] /= 10;
            }
        }
        return maxi;
    }
};