#include "TemplatePrinter.h"
#include "Catch.h"
#include <string>

TEST_CASE("TemplatePrinter class", "[template]") {
    // global variables
    TemplatePrinter<int> IntPrinters[2];
    IntPrinters[0].Set(10);
    IntPrinters[1].Set(2);
    TemplatePrinter<std::string> StringPrinters[2];
    StringPrinters[0].Set("test");
    StringPrinters[1].Set("test2");


    //each Section represents one function
    SECTION("Get should return the correct value") {
        REQUIRE(IntPrinters[0].Get() == 10);
        REQUIRE(IntPrinters[1].Get() == 2);
        REQUIRE(StringPrinters[0].Get() == "test");
        REQUIRE(StringPrinters[0].Get() == "test");
        REQUIRE(1 == 1);
    }

    SECTION("Overloaded operator == "){

    }

}


