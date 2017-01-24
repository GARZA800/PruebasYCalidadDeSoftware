#include "gtest/gtest.h"
#include "ev_1.h"


template<class instanceType>
class typedTest : public testing::Test
{
    public: 
        typedTest()
        {
            instance2Test = new instanceType;
        }
        ~typedTest() 
        { 
            delete instance2Test; 
            instance2Test = NULL;
        }
        
    protected: 
        Sort * instance2Test;
    
};

typedef testing::Types<bubble> implementations;

TYPED_TEST_CASE(typedTest, implementations);

TYPED_TEST(typedTest, sorting)
{
    int i;
    int res[5] = {1,2,3,4,5};
    this->instance2Test->bubble_sort();
   for(i = 0; i <= 5; i++)
   {
       EXPECT_EQ(res[i], this->instance2Test->a[i]);
   }
}


