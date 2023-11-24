const arrayStepper = (nums, i = 0, memo = {}) => {
  // todo
  if(i === nums.length - 1) return true;
  
  if(nums[i] === 0) return false;
  
  let destination = nums.length - 1;
  
  let max = 0;
  
  while(i < nums.length){
        max = Math.max(max, i + nums[i]);
​
        if(max >= destination){
            return true;
        }
​
        if(max <= i && nums[i] === 0){
            return false
        }
​
        i++;
    }
    return false;
};
​
module.exports = {
  arrayStepper,
};
​