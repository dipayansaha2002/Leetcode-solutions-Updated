class Solution {
public:
    bool isPathCrossing(string path) {
    unordered_set<string> visited;
    int x = 0, y = 0;
    visited.insert("0,0");

    for (char direction : path) {
        switch (direction) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
        }
        string current_position = to_string(x) + "," + to_string(y);
        // Check if the current position has been visited before
        if (visited.count(current_position) > 0) {
            return true;
        }
        // Mark the current position as visited
        visited.insert(current_position);
    }
    return false;  
    }
};