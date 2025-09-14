#include <iostream>
#include <vector>

class BinarySearch {
public:
    BinarySearch(const std::vector<int>& data) : arr(data) {}

    int search(int target) const {
        int left = 0, right = arr.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target)
                return mid;
            else if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1; // Not found
    }

private:
    std::vector<int> arr;
};

int main() {
    std::vector<int> data = {1, 3, 5, 7, 9, 11, 13};
    BinarySearch bs(data);

    int target = 7;
    int index = bs.search(target);

    if (index != -1)
        std::cout << "Found " << target << " at index " << index << std::endl;
    else
        std::cout << target << " not found." << std::endl;

    return 0;
}