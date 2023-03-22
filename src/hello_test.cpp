#include "hello.hpp"

#include <userver/utest/utest.hpp>

UTEST(SayHelloTo, Basic) {
  EXPECT_EQ(uservice_2::SayHelloTo("Developer"), "Hello, Developer!\n");
  EXPECT_EQ(uservice_2::SayHelloTo({}), "Hello, unknown user!\n");
}
