#ifndef RAT_H
#define RAT_H

class CRat
{
public:
  CRat();
  ~CRat();

  static void showNum();
  void squeak();

private:
  int m_id;
  static int m_count;
};

#endif // RAT_H
