#include <vector>
#include <limits>
​
float maxValue(std::vector<float> numbers) {
  // todo
  float max = -std::numeric_limits<float>::infinity();
  
  for(float num : numbers){
    if(max < num){
      max = num;
    }
  }
  return max;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}