#include "regex.h"

/**
 * check_star - check if the patern is a star
 *
 * @str: string to check
 * @pattern: pattern to check
 *
 * Return: 1 if the pattern is a star, 0 otherwise
 */
int check_star_presence(char const *pattern) {
	return (*(pattern + 1) == '*');
}

/**
 * check_dot - check if the next char is a dot
 *
 * @str: string to check
 * @pattern: pattern to check
 *
 * Return: 1 if the next char is a dot, 0 otherwise
 */
int check_dot_value(char const *str, char const *pattern) {
	if (!str || !pattern || !*str || !*pattern)
		return (0);

	return (*str == *pattern || *pattern == '.');
}

/**
 * regex_match - check if a string matches a pattern
 *
 * @str: string to check
 * @pattern: pattern to check
 *
 * Return: 1 if the string matches the pattern, 0 otherwise
 */
int regex_match(char const *str, char const *pattern)
{
	if (!str || !pattern)
		return (0);

	if (!*str && !check_star_presence(pattern))
		return (*pattern ? 0 : 1);

	// check all characters in the string
	else if (check_dot_value(str, pattern) && check_star_presence(pattern))
		return (regex_match(str + 1, pattern) || regex_match(str, pattern + 2));

	// check only the next character in the string
	else if (check_dot_value(str, pattern) && !check_star_presence(pattern))
		return (regex_match(str + 1, pattern + 1));

	// check if there is still a star
	else if (check_star_presence(pattern))
		return (regex_match(str, pattern + 2));

	return (0);
}
