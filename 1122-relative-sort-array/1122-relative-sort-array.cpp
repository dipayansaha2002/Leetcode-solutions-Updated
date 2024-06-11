class Solution{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        int frequency[1001] = {0};
        int arr1Length = arr1.size();
        int resultIndex = 0;
        int maxElement = 0;

        for (int num : arr1)
        {
            frequency[num]++;
            maxElement = max(num, maxElement);
        }

        vector<int> sortedArray(arr1Length);

        for (int num : arr2)
        {
            while (frequency[num]-- > 0)
            {
                sortedArray[resultIndex++] = num;
            }
        }

        for (int num = 0; num <= maxElement; num++)
        {
            while (frequency[num]-- > 0)
            {
                sortedArray[resultIndex++] = num;
            }
        }
        return sortedArray;
    }
};