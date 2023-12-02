#include <vector>
#include <set>
​
std::vector<int> intersection(std::vector<int> a, std::vector<int> b) {
  // todo
  std::vector<int> newArr;
  std::set<int> mySet(std::begin(a), std::end(a));
  for(auto& num : b){
    if(mySet.find(num) != mySet.end()){
      newArr.push_back(num);
    }
  }
  return newArr;
}
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}