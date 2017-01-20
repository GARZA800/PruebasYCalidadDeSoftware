#include"gtest/gtest.h"
#include"almacen.h"
#include<time.h>
#include<iostream>

class TimeFixture : public ::testing::Test
{
public:
    virtual void  SetUp(){
        tiempo = time(NULL);    
    }
  
    virtual void TearDown()
    {
        time_t elapsed_time = (time(NULL)-tiempo);
        EXPECT_TRUE(elapsed_time <= 5) << "tardo demasiado tiempo: " << elapsed_time << "segundos";
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
        TimeFixture::TearDown();      
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

TEST_F(AlmacenFixture, AddElement){
    a->addBack(5);
    EXPECT_EQ(1, a->getSize());
    //para hacer que falle la prueba por tardar demasiado tiempo
    sleep(10);
}


