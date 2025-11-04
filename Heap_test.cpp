#include <gtest/gtest.h>
#include <stdexcept>
#include "heap.h"

class HeapTest : public ::testing::Test {
protected:
    Heap<int> h;
};

TEST_F(HeapTest, PushAndPopMin) {
    h.push(3);
    h.push(1);
    h.push(2);
    EXPECT_EQ(h.pop(), 1);
    EXPECT_EQ(h.pop(), 2);
    EXPECT_EQ(h.pop(), 3);
}

TEST_F(HeapTest, EmptyAfterConstruction) {
    EXPECT_TRUE(h.empty());
}

TEST_F(HeapTest, PopFromEmptyThrows) {
    EXPECT_THROW(h.pop(), std::out_of_range);
}

TEST_F(HeapTest, NotEmptyAfterPush) {
    h.push(100);
    EXPECT_FALSE(h.empty());
}
