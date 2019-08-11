//=================================================================
// File: insertionSort.cpp
// Author: James Ortiz
// Description: Application of insertion sort
// in C++11.
// Compile: clang++ -Wall -std=c++11 insertionSort.cpp -o test
//=================================================================

#include <iostream> 
#include <vector>   // Add vector class:


//Insertion Sort Application for a vector of Intergers:
// Returns: void
// Worst case runtime: Sorts in O(n)
// Best case runtime:  Sorts in O(n^2)
void insertionSort(std::vector<int> &v)
{
  int temp, key;
  int i = 0;
  for(int j = 1; j < v.size(); j++)
    {
      key = v[j];
      //Insert A[j] into the sorted sequence A[1... j-1]
      i = j - 1;
      while((i >= 0) && (v[i] >= key))
	{
	  temp = v[i+1];
	  v[i+1] = v[i];
	  v[i] = temp;
	  i = i - 1;
	}

      v[i + 1] = key;
      
    }

  //return void
}



int main(void)
{

  //Declare vector of intergers A:
  std::vector<int> A = {5, 2, 4, 6, 1, 3};

  std::cout << "The original array looks like: ";

  //Display initial array:
  std::cout << "[ ";
  for(int i = 0; i < A.size(); i++)
    {
      std::cout << A[i] << " ";
    }

  std::cout << "]\n";


  std::cout << "Now, the new array looks like: ";

  //Array will be passed as argument A:
  insertionSort(A);

  //Display newly arranged Array:
  std::cout << "[ ";
  for(int i = 0; i < A.size(); i++)
    {
      std::cout << A[i] << " ";
    }

  std::cout << "]\n";
  
  return 0;
}// end MAIN:
