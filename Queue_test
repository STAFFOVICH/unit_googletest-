#include <gtest/gtest.h>
#include <stdexcept>

// Предполагается, что Queue реализован в файле queue.h
#include "queue.h"

class QueueTest : public ::testing::Test {
protected:
    Queue<int> q;
};

TEST_F(QueueTest, PushAndPop) {
    q.push(1);
    q.push(2);
    EXPECT_EQ(q.pop(), 1);
    EXPECT_EQ(q.pop(), 2);
}

TEST_F(QueueTest, EmptyAfterConstruction) {
    EXPECT_TRUE(q.empty());
}

TEST_F(QueueTest, PopFromEmptyThrows) {
    EXPECT_THROW(q.pop(), std::out_of_range); // или std::runtime_error — в зависимости от реализации
}

TEST_F(QueueTest, NotEmptyAfterPush) {
    q.push(42);
    EXPECT_FALSE(q.empty());
}
