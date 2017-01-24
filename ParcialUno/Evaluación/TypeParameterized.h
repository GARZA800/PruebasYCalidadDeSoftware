#include "gtest/gtest.h"
#include "ev_1.h"

template<class instanceType>
class TypeParameterized : public testing::Test
{
    public: 
        TypeParameterized()
        {
            instance2Test = new instanceType;
        }
        ~TypeParameterized()
        {
            delete instance2Test;
            instance2Test = NULL;
        }
    
    protected: 
        Sort* instance2Test;
};

TYPED_TEST_CASE_P(TypeParameterized);


TYPED_TEST_P(TypeParameterized, sorting)
{
    int i;
    int res[5] = {1,2,3,4,5};
    this->instance2Test->bubble_sort();
   for(i = 0; i <= 5; i++)
   {
       EXPECT_EQ(res[i], this->instance2Test->a[i]);
   }
}

REGISTER_TYPED_TEST_CASE_P(TypeParameterized, sorting);
