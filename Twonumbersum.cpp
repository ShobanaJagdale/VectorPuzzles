#include <vector>
using namespace std;

template<typename... Args>
void push(std::vector<int>& v, Args... args)
{
   (v.emplace_back(args),...);  
}

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  vector<int> result;
  for(int i=0; i<array.size();i++)
  {
     int num1 = array[i];
     int num2 = targetSum - num1;
     auto pos = std::find(array.begin(),array.end(),num2);
     if(pos!= array.end() && i != std::distance(array.begin(),pos)) 
     {
        push(result,num1,num2);
        return result;
     }
  }
  return result;
}
