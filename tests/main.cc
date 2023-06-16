#include <gtest/gtest.h>
#include "LibraryCode.hpp"


TEST(TestSuiteSample, TestSample)
{
  int s = sum(2, 4);
  ASSERT_EQ(6, s);
}
