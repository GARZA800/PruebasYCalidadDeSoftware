#include "gtest/gtest.h"
#include "ev_1.h"


typedef Sort* factoryMethod();


Sort* instance1(){
  return new bubble;
}


class Fixture :public testing::TestWithParam<factoryMethod*>{
protected:
  Sort* instance2Test;
public:
  void SetUp(){
    instance2Test = (*GetParam())();
  }

  void TearDown(){
    delete instance2Test;
    instance2Test = NULL;
  }
};

TEST_P(Fixture, sorting){
    int i;
    int res[5] = {1,2,3,4,5};
    this->instance2Test->bubble_sort();
   for(i = 0; i <= 5; i++)
   {
       EXPECT_EQ(res[i], this->instance2Test->a[i]);
   }
}


INSTANTIATE_TEST_CASE_P(CaseName, Fixture, testing::Values(&instance1));