#include "pch.h"
#include "Neo.h"

extern Neo::Application* Neo::CreateApplication();

class Sandbox : public Neo::Application
{
public:
    Sandbox() {

    }

    ~Sandbox() {

    }

};

Neo::Application* Neo::CreateApplication() {

    return new Sandbox();
}

    TEST(TestCaseName, TestName) {
        EXPECT_EQ(1, 1);
        EXPECT_TRUE(true);
    }
