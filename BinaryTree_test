#include <gtest/gtest.h>
#include <stdexcept>
#include "binary_tree.h"

class BinaryTreeTest : public ::testing::Test {
protected:
    BinaryTree<int> tree;
};

TEST_F(BinaryTreeTest, PushAndSearch) {
    tree.push(5);
    tree.push(3);
    tree.push(7);
    EXPECT_TRUE(tree.search(5));
    EXPECT_TRUE(tree.search(3));
    EXPECT_TRUE(tree.search(7));
    EXPECT_FALSE(tree.search(10));
}

TEST_F(BinaryTreeTest, PopExistingValue) {
    tree.push(10);
    tree.push(5);
    EXPECT_EQ(tree.pop(5), 5);
    EXPECT_FALSE(tree.search(5));
    EXPECT_TRUE(tree.search(10));
}

TEST_F(BinaryTreeTest, PopNonExistingValueThrows) {
    tree.push(1);
    EXPECT_THROW(tree.pop(2), std::out_of_range);
}

TEST_F(BinaryTreeTest, EmptyAfterConstruction) {
    EXPECT_TRUE(tree.empty());
}

TEST_F(BinaryTreeTest, NotEmptyAfterPush) {
    tree.push(42);
    EXPECT_FALSE(tree.empty());
}
