#include <string>
#include <iostream>
#include <algorithm>
​
bool anagrams(std::string s1, std::string s2) {
  // todo
  std::sort(s1.begin(), s1.end());
  std::sort(s2.begin(), s2.end());
  return s1 == s2;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}