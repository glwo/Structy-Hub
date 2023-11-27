const permutations = (items) => {
  // todo
  if(items.length === 0) return [[]];
  let first = items[0];
  let perms = permutations(items.slice(1));
  
  let allPerms = [];
  
  for(let perm of perms){
    for(let i = 0; i <= perm.length; i++){
      allPerms.push([...perm.slice(0, i), first, ...perm.slice(i)])
    }
  }
  return allPerms;
};
​
module.exports = {
  permutations,
};
​