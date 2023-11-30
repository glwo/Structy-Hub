const combineIntervals = (intervals) => {
  // todo
  const sortededIntervals = intervals.sort((intervalA, intervalB) => intervalA[0] - intervalB[0]);
  const combined = [ sortededIntervals[0] ];
  
  for(let currentInterval of sortededIntervals.slice(1)){
    const [lastStart, lastEnd] = combined.at(-1);
    const [currentStart, currentEnd] = currentInterval;
    if(currentStart <= lastEnd){
      if(currentEnd > lastEnd) {
        combined.at(-1)[1] = currentEnd;
      }
    } else {
      combined.push(currentInterval)
    }
  }
  
  return combined;
};
​
module.exports = {
  combineIntervals,
};
​