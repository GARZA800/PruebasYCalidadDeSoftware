#include"gtest/gtest.h"
#include"almacen.h"
#include<time.h>

class TimeFixture : public testing::Test
{
public:
    virtual void  SetUp(){
        tiempo = time(NULL);    
    }
  
    virtual void TearDown()
    {
        EXPECT_TRUE((time(NULL) - tiempo) <= 10) << "ERROR. Took too long";
    }
private:
    time_t tiempo;
};

class AlmacenFixture : public TimeFixture
{
public: 
    void SetUp(){
        TimeFixture::SetUp();   
    }
    void TearDown()
    {
              
    }
    static void SetUpTestCase()
    {
        a = new Almacen<int>(10);
    }
    static void TearDownTestCase()
    {
        delete a;
    }
    
    static Almacen<int> *a; 
};

Almacen<int>* AlmacenFixture::a = 0;

TEST_F(AlmacenFixture, Constructor)
{
    ASSERT_EQ(10, a->size());
}

TEST_F(AlmacenFixture, Borrar)
{
    int s = a->size();
    a->borrar(0);
    ASSERT_EQ(s-1, a->size());
}


