const countPaths = (grid, r = 0, c = 0, memo = {}) => {
  // todo
  let pos = r + "," + c;
  if(pos in memo) return memo[pos];
  
  if(r === grid.length || c === grid[0].length || grid[r][c] === "X") return 0;
  
  if(r === grid.length - 1 && c === grid[0].length - 1) return 1;
  
  const downCount = countPaths(grid, r, c + 1, memo);
  const rightCount = countPaths(grid, r + 1,c, memo);
  
  memo[pos] = downCount + rightCount;
  return downCount + rightCount;
};
​
module.exports = {
  countPaths,
};
​