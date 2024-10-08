#pragma GCC optimize("O3", "unroll-loops")
class RandomizedSet {
    unordered_map<int, int> S;
    vector<int> idx;
    int sz=0;
    mt19937 rng; 
public:
    RandomizedSet() {
        rng= mt19937(time(NULL));
    }
    
    bool insert(int val) {
        if (S.count(val)) return 0;
        
        S[val]=sz++;
        idx.push_back(val);
        return 1;
    }
    
    bool remove(int val) {
        if (!S.count(val)) return 0;
        
        int r=idx.back();
        int pos=S[val];
        
        S[r]=pos;
        idx[pos]=r;

        S.erase(val);
        idx.pop_back();
        sz--;
        
        return 1;
    }
    int getRandom() {
        return idx[rng()%sz];
    }
};


auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */