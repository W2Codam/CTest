# CTest

Single header file for easy to use C unit testing.

How to Use
----------

Simply include the header and start using the macros.
After writing some unit tests all that is required is to execute them with `TEST_RUN(...)`, the results will the be printed to the *stdout*.

Additionally its possible to halt testing if a specific test fails as shown in the example below.

Example
------------------

```c
#include "CTest.h"
#include <stdbool.h>

// This will always fail...
TEST_DECLARE(testA)
{
	TEST_ASSERT(sizeof(int) != 2);
	return (1);
}

// This will always pass...
TEST_DECLARE(testB)
{
	TEST_ASSERT(sizeof(short) == 2);
	return (1);
}

// Main
int main(int argc, char const *argv[])
{

	TEST_RUN(UNIT_testA, false);
	TEST_RUN(UNIT_testB, false);
	TEST_RUN(UNIT_testA, true);
	TEST_RUN(UNIT_testB, false);

	return (0);
}
```