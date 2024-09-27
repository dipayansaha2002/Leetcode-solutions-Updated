class MyCalendarTwo {
public:
    MyCalendarTwo() {}

    vector<pair<int, int>> bookings;  
    vector<pair<int, int>> overlaps;  

    bool check(int start, int end) {
        for (const auto& o : overlaps) {
            if (start < o.second && end > o.first) { 
                return false;
            }
        }
        for (const auto& b : bookings) {
            if (start < b.second && end > b.first) { 
                overlaps.push_back({max(start, b.first), min(end, b.second)});  
            }
        }
        bookings.push_back({start, end});
        return true;  
    }

    bool book(int start, int end) {
        if (start >= end) {
            return false;  
        }
        return check(start, end);  
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */