const lexicalOrder = (word1, word2, alphabet) => {
  // todo
  if(word1 === word2) return true;
  let longer = "";
  
  if(word1.length > word2.length){
    longer = word1;
  } else {
    longer = word2;
  }
  
  for(let i = 0; i < longer.length; i++){
    if(word1[i] === word2[i]){
      continue
    } 
      return alphabet.indexOf(word1[i]) < alphabet.indexOf(word2[i]);
    
  }
};
​
module.exports = {
  lexicalOrder,
};
​