#include "first.h"
#include "gtest/gtest.h"

TEST(Factorial, positivos)
{
  ASSERT_EQ(1,fact(1));
  ASSERT_EQ(120,fact(5));
}

TEST(Factorial, negativos)
{
    ASSERT_EQ(0,fact(-2));
}

TEST(Factorial, cero)
{
    ASSERT_EQ(1, fact(0));
}