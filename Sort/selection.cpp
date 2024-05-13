#include <iostream>
using namespace std;

/*
-- In Selection Sort We Search About Min Element And We Swap In First Element
-- And Search The Second Min Element And Swap That The Second Place
-- And Repeat This Steps When The Array Is Sorted
*/

void Selection_Sort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int Min_Index = i; // The Min Element We Need Swap This
    for (int j = i + 1; j < size; j++)
    { // In This Step The J ELement Always Loop Until Final Array
      // And Check In loop About Element Is Small Than Min_Index Or No If Yes We Update
      // The Min_Index To j Because Search Minium Element In Array
      if (arr[j] < arr[Min_Index])
      {
        Min_Index = j;
      }
    }
    // When We Arrive Min Element Swap This Is Suitable Place
    int temp = arr[Min_Index]; // Create Third Element To Use It In Swap
    arr[Min_Index] = arr[i];
    arr[i] = temp;
  }
}

int main()
{
  int Array[]{5, 2, 4, 8, 6, 10, 3, 5, 1, 2, 0};

  int size = sizeof(Array) / sizeof(Array[0]);

  Selection_Sort(Array, size);

  for (int i = 0; i < size; i++)
  {
    cout << Array[i] << "\n";
  }

  return 0;
}
