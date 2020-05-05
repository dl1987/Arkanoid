#include "gtest/gtest.h"


struct TestSuite : ::testing::Test
{

};

TEST_F(TestSuite, test1)
{
    EXPECT_TRUE(false);
}
