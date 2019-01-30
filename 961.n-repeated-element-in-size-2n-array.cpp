class Solution {
public:
  map<int, int> numbers;
    int repeatedNTimes(vector<int>& A) {
      for(auto it: A){
        numbers[it]++;
        if(numbers[it] == 2) return it;
      }
      return NULL;
    }
};
