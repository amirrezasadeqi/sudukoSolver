#include "criterion/criterion.h"

Test(printers, firsttest){
    char* message = "hello world!";
    cr_assert_str_eq(message, "hello world!");
}