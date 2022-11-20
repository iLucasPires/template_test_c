#include <test.h>

void	setUp(void)
{
    


        printf("Test");
}

void	tearDown(void)
{
}

int	main(void)
{
	UNITY_BEGIN();

    
	RUN_TEST(test_string);
	RUN_TEST(test_lexer);

	return (UNITY_END());
}