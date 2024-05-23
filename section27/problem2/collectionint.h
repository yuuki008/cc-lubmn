#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_

class CollectionInt
{
private:
  int *m_pArray;
  int m_size;

public:
  CollectionInt(int *array, int size);
  ~CollectionInt();
  int getMax();
  int getMin();
  void showArray();
};

#endif // _COLLECTIONINT_H_
