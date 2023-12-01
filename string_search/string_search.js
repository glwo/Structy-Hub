const stringSearch = (grid, s) => {
  // todo
  for(let r = 0; r < grid.length; r += 1){
    for(let c = 0; c < grid[0].length; c+= 1){
      if (DFS(grid, r, c, s)) return true;
    }
  }
  return false;
};
​
const DFS = (grid, r, c, s) => {
  if(s === '') return true;
  const rowInBounds = 0 <= r && r < grid.length;
  const colInBounds = 0 <= c && c < grid[0].length;
  
  if(!rowInBounds || !colInBounds) return false;
  
  if(s[0] !== grid[r][c]) return false;
  
  const suffix = s.slice(1);
  return DFS(grid, r - 1, c, suffix) || 
    DFS(grid, r + 1, c, suffix) ||
    DFS(grid, r, c - 1, suffix) ||
    DFS(grid, r, c + 1, suffix);
  
}
​
module.exports = {
  stringSearch,
};
​