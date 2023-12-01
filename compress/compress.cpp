#include <string>
​
std::string compress(std::string s) {
  // todo
  int l = 0;
  int r = 0;
  std::string newStr = "";
  
  while(r < s.length()){
    int count = 0;
    while(s[l] == s[r]){
      count++;
      r++;
    }
    if(count == 1){
      newStr += s[l];
    } else{
      newStr += std::to_string(count) + s[l];
    }
    l = r;
  }
  
  return newStr;
}
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}