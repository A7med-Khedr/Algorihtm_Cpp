#include <iostream>
using namespace std;

// Linear Search Function
int Linear_Search(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  // Linear Search
  int My_Array[]{10, 7, 11, 5, 6, 1, 2, 8, 7, 1, 10, 20};
  // Array To Search It
  int size = sizeof(My_Array) / sizeof(My_Array[0]);
  // To Calculate Size Of Array
  int key = 8;
  // Key To Search It
  int result = Linear_Search(My_Array, size, key);
  // Store Index To Key

  if (result != -1)
  {
    cout << "Key: " << key << " In Index: " << result << endl;
  }
  else
  {
    cout << "Key Not Found\n";
  }
  // End
  return 0;
}
