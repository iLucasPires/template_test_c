#include <test.h>

typedef struct s_command
{
	char	*name;
	char	*path;
	char	**args;
}			t_command;

void	lexer(char *line, t_command *command)
{
	char	**tokens;

	tokens = ft_split(line, ' ');
	command->name = tokens[0];
	command->path = NULL;
	command->args = tokens;
}

void	test_lexer(void)
{
	t_command	command;
    t_command    expected;

    expected.name = "ls";
    expected.path = NULL;
    expected.args = ft_split("ls -l", ' ');

    lexer("ls -l", &command);
    TEST_ASSERT_EQUAL_STRING(expected.name, command.name);
    TEST_ASSERT_EQUAL_STRING(expected.path, command.path);
    TEST_ASSERT_EQUAL_STRING_ARRAY(expected.args, command.args, 2);
    
}