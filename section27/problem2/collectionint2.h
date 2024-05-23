#ifndef COLLECTIONINT2_H
#define COLLECTIONINT2_H

#include <iostream>

using namespace std;

template <typename T>
class CollectionInt
{
private:
  T *m_pArray;
  int m_size;

public:
  CollectionInt(T *array, int size)
  {
    m_size = size;
    m_pArray = new T[m_size];
    for (int i = 0; i < m_size; i++)
    {
      m_pArray[i] = array[i];
    }
  };

  ~CollectionInt()
  {
    delete[] m_pArray;
  };

  T getMax()
  {
    T max = m_pArray[0];
    for (int i = 1; i < m_size; i++)
    {
      if (m_pArray[i] > max)
      {
        max = m_pArray[i];
      }
    }

    return max;
  };

  T getMin()
  {
    T min = m_pArray[0];
    for (int i = 1; i < m_size; i++)
    {
      if (m_pArray[i] < min)
      {
        min = m_pArray[i];
      }
    }

    return min;
  };

  void showArray()
  {
    for (int i = 0; i < m_size; i++)
    {
      cout << m_pArray[i] << " ";
    }
    cout << endl;
  }
};
#endif // COLLECTIONINT2_H
