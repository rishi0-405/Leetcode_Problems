class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int occurrance[1000] = {0};
        int size = 0;
        int count = 1;

        for (int i = 1; i <= arr.size(); i++) {
            if (i < arr.size() && arr[i] == arr[i - 1]) {
                count++;
            } else {
                for (int j = 0; j < size; j++) {
                    if (occurrance[j] == count)
                        return false;
                }
                occurrance[size++] = count;
                count = 1;
            }
        }

        return true;
    }
};