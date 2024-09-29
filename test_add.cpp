#include <gtest/gtest.h>

#include "sum.hpp"



TEST(Add,Simple){
    EXPECT_EQ(sum(2,2),4);
    EXPECT_EQ(sum(2,3),sum(3,2));
    EXPECT_EQ(sum(-42,3),-39);

}