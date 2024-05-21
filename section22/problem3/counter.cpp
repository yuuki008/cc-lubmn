#include "counter.h"

int Counter::m_totalCount = 0;

Counter::Counter() : m_count(0) {}

int Counter::getTotalCount()
{
  return m_totalCount;
}

void Counter::reset()
{
  m_totalCount -= m_count;
  m_count = 0;
}

void Counter::count()
{
  m_totalCount++;
  m_count++;
}

int Counter::getCount()
{
  return m_count;
}