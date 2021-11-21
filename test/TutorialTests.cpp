#include <gtest/gtest.h>

#include "../tutorial1.hpp"

TEST(Tutorial__Absolut__Test, absolut){
    int x = 5;
    int expectedAbs = x;
    EXPECT_EQ(expectedAbs, absolut(x));
}

TEST(Tutorial__Kuadrat__Test, kuadrat){
    int x = 4;
    int expectedKuadrat = 16;
    EXPECT_EQ(expectedKuadrat, kuadrat(x));
}

TEST(Tutorial__Fibbo__Test, fibbo){
    int x = 7;
    int expectedFibbo = 13;
    EXPECT_EQ(expectedFibbo, fibbo(x));
}

TEST(Tutorial__Max__Test, max){
    int x = 5;
    int y = 9;
    int expectedMax = 9;
    EXPECT_EQ(expectedMax, max(x,y));
}