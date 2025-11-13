// Fixed-size array
int a[] = {1,2,3,4};
size_t n = sizeof(a) / sizeof(a[0]); // 4

// std::vector
#include <vector>
std::vector<int> v = {1,2,3,4};
size_t m = v.size(); // 4