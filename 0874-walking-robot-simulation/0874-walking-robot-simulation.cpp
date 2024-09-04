class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> uset;
        for(int i = 0;i<obstacles.size();i++){
            uset.insert(to_string(obstacles[i][0]) + "." + to_string(obstacles[i][1]));
        }
        
        int dir = 0, x = 0, y= 0, dx, dy, res = 0;
        int move[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        for(int i = 0;i<commands.size();i++){
            if(commands[i] == -1)dir++;
            else if(commands[i] == -2) dir--;
            else{
                
                for(int j = 0;j<commands[i];j++){
                    dx = x + move[dir][0];
                    dy = y + move[dir][1];
                    string key = to_string(dx) + "." + to_string(dy);
                    if(uset.count(key)){
                        break;
                    }
                    x = dx, y = dy;
                    res = max(res, x*x + y*y);
                }
            }
            dir = (dir + 4) % 4;
        }
        return res;
    }
};