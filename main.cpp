#define CATCH_CONFIG_RUNNER
#include "Catch.h"
#include "Printer.h"
#include "TemplatePrinter.h"
#include <string>

int test(){
    return Catch::Session().run();
}


int main(int argc, char ** argv) {
    test();
}


int run(){
    Printer print = Printer();
    print.Set(5);
    print.Print();

    TemplatePrinter<int> intPrinter = TemplatePrinter<int>();
    intPrinter.Set(10);
    intPrinter.Print();

    TemplatePrinter<std::string> stringPrinter = TemplatePrinter<std::string>();
    stringPrinter.Set("Test");
    stringPrinter.Print();
    return 0;
}