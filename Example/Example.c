/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: W2Wizard <w2.wizzard@gmail.com>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/10 15:43:31 by W2Wizard      #+#    #+#                 */
/*   Updated: 2021/09/10 15:43:31 by W2Wizard      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../src/CTest.h"
#include <stdbool.h>

TEST_DECLARE(testA)
{
	TEST_ASSERT(sizeof(int) != 2);
	return (1);
}

TEST_DECLARE(testB)
{
	TEST_ASSERT(sizeof(short) == 2);
	return (1);
}

int main(int argc, char const *argv[])
{
	TEST_RUN(UNIT_testA, false);
	TEST_RUN(UNIT_testB, false);
	TEST_RUN(UNIT_testA, true);
	TEST_RUN(UNIT_testB, false);
	return 0;
}
