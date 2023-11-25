
const knightlyNumber = (n, m, kr, kc, pr, pc, memo = {}) => {
  // todo
  let key = m + "," + kr + "," + kc;
  
  if(key in memo){
    return memo[key];
  }
  
  if(kr < 0 || kr >= n || kc < 0 || kc >= n) {
    return 0;
  }
  
  if(m === 0) {
    if(kr === pr && kc === pc){
      return 1;
    } else {
      return 0;
    }
  }
  
  const neighborPositions = [
    [ kr + 2, kc + 1 ],
    [ kr - 2, kc + 1 ],
    [ kr + 2, kc - 1 ],
    [ kr - 2, kc - 1 ],
    [ kr + 1, kc + 2 ],
    [ kr - 1, kc + 2 ],
    [ kr + 1, kc - 2 ],
    [ kr - 1, kc - 2 ],
  ];
  
  let count = 0;
  for(let neighborPos of neighborPositions){