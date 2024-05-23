#include "collectionint.h"
#include <iostream>

using namespace std;

CollectionInt::CollectionInt(int *array, int length)
{
  m_size = length;
  m_pArray = new int[m_size];
  for (int i = 0; i < m_size; i++)
  {
    m_pArray[i] = array[i];
  }
}

CollectionInt::~CollectionInt()
{
  delete[] m_pArray;
}

int CollectionInt::getMax()
{
  int max = m_pArray[0];
  for (int i = 1; i < m_size; i++)
  {
    if (m_pArray[i] > max)
    {
      max = m_pArray[i];
    }
  }
  return max;
}

int CollectionInt::getMin()
{
  int min = m_pArray[0];
  for (int i = 1; i < m_size; i++)
  {
    if (m_pArray[i] < min)
    {
      min = m_pArray[i];
    }
  }

  return min;
}

void CollectionInt::showArray()
{
  for (int i = 0; i < m_size; i++)
  {
    cout << m_pArray[i] << " ";
  }
  cout << endl;
}