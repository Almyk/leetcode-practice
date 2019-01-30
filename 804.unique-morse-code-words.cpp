class Solution {
public:
  vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    int uniqueMorseRepresentations(vector<string>& words) {
      map<string, int> unique_words;

      for(int i = 0; i < words.size(); i++){
        string transformation;
        for(int j = 0; j < words[i].length(); j++){
          transformation += morse[words[i][j] - 'a'];
        }
        unique_words[transformation]++;
      }
      return unique_words.size();
    }
};
