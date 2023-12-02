#include <array>
#include <vector>
#include <unordered_map>
​
std::array<int, 2> pairProduct(std::vector<int> numbers, int target) {
  // todo
  std::unordered_map<int, int> complementMap;
  
  for(int i = 0; i < numbers.size(); i++){
    int complement = target / numbers[i];
    
    if(complementMap.count(complement) > 0){
      return std::array<int, 2> { i, complementMap[complement] };
    }
    complementMap[numbers[i]] = i;
  }
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}