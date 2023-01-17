#include "gtest/gtest.h"

#include "oop2.h"

TEST(HashtagTest, WordsInput)
{
    EXPECT_EQ("hello world","#HelloWorld");
    EXPECT_EQ("   hello world","#HelloWorld");
    EXPECT_EQ("   hello world   ","#HelloWorld");
    EXPECT_EQ("hello    world","#HelloWorld");
    EXPECT_EQ("helloworld","#HelloWorld");
}
