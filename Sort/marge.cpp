#include <iostream>
#include <vector>
using namespace std;

/*
-- The Marge Sort Function Work On Principle Divide And Conquer
-- And Marge Consist Of Two Function First Function To Divide Array And Second Marge It
-- We Divide The Array To SubArray Until We Have A Only Element In Array
-- And Marge This SubArray To The Original Array
-- But When We Marge We Sort Element In SubArray
*/

vector<int> marge(vector<int> left, vector<int> right)
{                     // Left And Right Parameter This is A Sub Array
  int i = 0, j = 0;   // I Pointer In First Element In Left Array And J POinter To Right Array
  vector<int> result; // Result Vector TO Store The Sorted Element
  while (i < left.size() && j < right.size())
  { // If This Condition True Mean We Don't Out Length Of Array
    if (left[i] < right[j])
    {                            // Check If The Element In Left Array Smaller Or No
      result.push_back(left[i]); // If Smaller We Push This Element In Result Vector
      i++;                       // And Increment i Plus 1
    }
    else
    {
      result.push_back(right[j]); // If Element In Right Smaller Push Element In Result Vector
      j++;                        // And Increment J Plus 1
    }
  }
  // When We Finish This Operation
  // Possible Have Many ELement In Left And Right Vector
  // But All Element In Left Became Smaller Than Element In Right After Looping

  while (i < left.size())
  { // So We Push All Element In Left To Result
    result.push_back(left[i]);
    i++;
  }

  while (j < right.size())
  { // And Push all Element In Right To Result
    result.push_back(right[j]);
    j++;
  }

  return result; // When Finish Return Result
}

vector<int> Marge_Sort(vector<int> Array)
{
  if (Array.size() <= 1)
  { // Divide My Vector When Have One Element In Array
    return Array;
  }

  int mid = Array.size() / 2; // Calculate Mid Element To divide Vector

  vector<int> left(Array.begin(), Array.begin() + mid); // Left Vector Store Element Left Mid ELement
  // And Left Vector Not Include Mid element Because When Slice ( Not Include End Element )
  vector<int> right(Array.begin() + mid, Array.end()); // Right Vector Store Element Right Mid ELement And Mid
  // Array.begin() => It Is Iterator In First Element
  // Array.end() => It Is Iterator After Last Element Not Last Element
  // And In => (  ) This Is Constructor In Vector We Use It To Store Left And Right ELement

  left = Marge_Sort(left); // We Call Marge_Sort Because We Need Sort Element In Left And Right Before Marge
  // And Store It In Left And Right Vector
  right = Marge_Sort(right);

  return marge(left, right); // And Marge Left And Right Vector When Finish Sort
}

int main()
{
  vector<int> Nums = {2, 3, 5, 4, 1, 2, 0, 3, 8, 9, 7, 4, 5, 10, 12, 15, 30};
  vector<int> Nums_Sort = Marge_Sort(Nums);

  cout << "Sorted Vector" << "\n";

  for (int i = 0; i < Nums_Sort.size(); i++)
  {
    cout << Nums_Sort[i] << "\n";
  }

  return 0;
}
