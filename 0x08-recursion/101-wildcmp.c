#include "main.h"
int sgmnt_len(char *s);
int wild(char *s1, char *s2, char *pr);
char *_strstr(char *s, char *d, int i, int j);
int _is_substring(char *s, char *d, int i, int j);
int _is_endstr(char *s, char *d, int i, int j);

/**
 * wildcmp - wrapper for wild
 * identical string.
 * @s1: the string to match
 * @s2: the wildcard string.
 *
 * Return: if it matches 1;
 * else, 0;
 */
int wildcmp(char *s1, char *s2)
{
	return (wild(s1, s2, 0));
}

/**
 * wild - Checks if a wildcard string matches
 * identical string.
 * @s1: the string to match
 * @s2: the wildcard string.
 * @pr: the previous non-astericks segment.
 *
 * Return: if it matches 1;
 * else, 0;
 */
int wild(char *s1, char *s2, char *pr)
{
	int len;
	char *start;

	if (*s2 == 0)
	{
		if (*s1 == 0 || *(s2 - 1) == '*')
			return (1);
		len = sgmnt_len(pr);
		return (_is_endstr(s1, pr, 0, len - 1) ? 1 : 0);
	}
	if (*s2 != '*')
	{
		len = sgmnt_len(s2);
		start = _strstr(s1, s2, 0, len - 1);

		return ((start == 0) ? 0 : wild((start + len), (s2 + len), s2));
	}
	else
	{
		return (wild(s1, s2 + 1, 0));
	}
}

/**
 * sgmnt_len - gets length of next non-astericks
 * consecutive string
 * @s: the string containing segment.
 *
 * Return: length of segment;
 */
int sgmnt_len(char *s)
{
	if (*s == 0 || *s == '*')
		return (0);
	return (1 + sgmnt_len(s + 1));
}

/**
 * _strstr - check for position of string (needle)
 * in another string(haystack).
 * @s: the haystack string
 * @d: the needle string.
 * @i: start delim of needle string.
 * @j: end delim of needle string.
 *
 * Return: if found, pointer to start of substring;
 * else, NULL;
 */
char *_strstr(char *s, char *d, int i, int j)
{
	int res;

	if (*s == 0 || *(s + j) == 0)
		return (0);
	if (*s != *d)
		return (_strstr(s + 1, d, i, j));
	res = _is_substring(s, d, i, j);
	return (res ? s : _strstr(s + 1, d, i, j));
}

/**
 * _is_substring - checks if a string is substring
 * of another string.
 * @s: the haystack string
 * @d: the needle string.
 * @i: start delim of needle string.
 * @j: end delim of needle string.
 *
 * Return: if is substring, 1;
 * else, 0;
 */
int _is_substring(char *s, char *d, int i, int j)
{
	if (i > j)
		return (1);
	if (*(s + i) != *(d + i) || *(s + j) != *(d + j))
		return (0);
	return (_is_substring(s, d, i + i, j - 1));
}

/**
 * _is_endstr - checks if a string ends with
 * a particular substring.
 * @s: the haystack string
 * @d: the needle string.
 * @i: start delim of needle string.
 * @j: end delim of needle string.
 *
 * Return: if is endstring, 1;
 * else, 0;
 */
int _is_endstr(char *s, char *d, int i, int j)
{
	int res;
	int len = j + 1;

	if (*(s + len) != '\0')
		return (_is_endstr(s + 1, d, i, j));
	res = _is_substring(s, d, i, j);
	return (res);
}
