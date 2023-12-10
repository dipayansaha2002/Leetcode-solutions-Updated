class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int tested_devices = 0;
        for(int i =0 ; i < batteryPercentages.size(); ++i )
        {
            if(batteryPercentages[i]-tested_devices > 0)
                tested_devices++;
        }
        return tested_devices;
    }
};
