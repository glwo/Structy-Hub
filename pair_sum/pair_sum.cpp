#include <array>
#include <vector>
#include <unordered_map>
​
std::array<int, 2> pairSum(std::vector<int> numbers, int target) {
  std::unordered_map<int, int> complementMap;
​
  for(int i = 0; i < numbers.size(); i++){
    int complement = target - numbers[i];
    if(complementMap.find(complement) != complementMap.end()){
      return std::array<int, 2>{complementMap[complement], i};
    }
    complementMap[numbers[i]] = i;
  }
​
  // Indicate that no pair is found
  return std::array<int, 2>{-1, -1};
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}