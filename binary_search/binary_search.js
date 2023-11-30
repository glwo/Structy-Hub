const binarySearch = (numbers, target) => {
  // todo
  let l = 0;
  let r = numbers.length - 1;
  
  while(l <= r){
    let mid = Math.floor((r + l) / 2)
    if(numbers[mid] < target){
      l = mid + 1;
    } else if(numbers[mid] > target){
      r = mid - 1;
    } else {
      return mid;
    }
  }
  return -1;
};
​
// console.log(binarySearch([0, 1, 2, 3, 4, 5, 6, 7, 8], 6)) // -> 6
​
module.exports = {
  binarySearch,
};
​