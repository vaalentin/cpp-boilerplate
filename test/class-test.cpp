#include "gtest/gtest.h"
#include "../src/core.h"

class TestClass : public ::testing::Test {
  private:
  protected:
    TestClass() {
      // before each test
      id = 0; 
    }

    virtual ~TestClass() {
      // after each test
    }

    virtual void SetUp() {
      // if the constructor is not enough, called before each test
    }

    virtual void TearDown() {
      // if the destructor is not enough, called after each test
    }

  public:
    int id;
};

TEST_F(TestClass, should_pass) {
  EXPECT_EQ(0, id);
}

