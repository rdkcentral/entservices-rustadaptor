#include <gtest/gtest.h>

#include "NativeJSImplementation.h"

using namespace WPEFramework;

TEST(NativeJSImplementationTest, RunJavaScriptRejectsCallerProvidedCode)
{
    Plugin::NativeJSImplementation implementation;

    EXPECT_EQ(Core::ERROR_UNAVAILABLE, implementation.RunJavaScript(1, "1 + 1"));
}
