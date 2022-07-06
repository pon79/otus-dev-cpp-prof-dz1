#define BOOST_TEST_MODULE test_version

#include "lib.h"

#include <gtest/gtest.h>

TEST(AppTest, VersionTest) {
    ASSERT_TRUE(version() > 30) << "wrong version number";
}

