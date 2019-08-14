//==============================================
//Author:  James Ortiz
//File:    selectionSort.cpp
//Description: An overview of selection sort
//implemented in C++11
//Compile:  
//===============================================


#include<iostream>
#include<algorithm>
#include<vector>

//generic selection-sort
//in-place
//not stable (calls to swap may end up changing the order of equal elements)
//exactly n(n+1)/2 calls to comparison operator on any input
//run-time = Theta(n^2) (for worst, average and best cases)
//Requires forward iterators.



template<typename ForwardIterator>
void g_selection_sort(ForwardIterator beg, ForwardIterator end)
{
  ForwardIterator i, j, k;
  for(i = beg; i != end; ++i)
    {
      k = i;
      for(j = i; j != end; ++j)
	{
	  if(*j < *k)
	    k = j;
	  std::swap(*i, *k);
	}
    }
}


int main(void)
{
  std::vector<int> A = {44, 56, 60, 76, 55};
  std::vector<int>::iterator ptr;
  std::vector<int>::iterator beg = A.begin();
  std::vector<int>::iterator end = A.end();
  
  std::cout << "This is the original vector: ";
  for(ptr = A.begin(); ptr < A.end(); ptr++)
    {
      std::cout << (*ptr) << " ";
    }

  std::cout << "\n";
  
  g_selection_sort(beg, end);

  std::cout << "This is the ordered version of the vector: ";
  for(ptr = A.begin(); ptr < A.end(); ptr++)
    {
      std::cout << (*ptr) << " ";
    }
  std::cout << "\n";

  //--------------------------------------------------------
}
