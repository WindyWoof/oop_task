#include "gtest/gtest.h"

#include "oop2.h"

TEST(HashtagTest, WordsInput)
{
    EXPECT_EQ("hello","#Hello");
    EXPECT_EQ("               privet","#Privet");
    EXPECT_EQ("   hello    ","#Hello")
}
