#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int gl(char line[], int maxline);
void removetrail(char input[], int len);

/* remove trailing blanks and tabs from each line of input, and to delete entirely blank lines; assumes number of characters NOT MORE than MAXLINE */
main()
{
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */
/*
	while (there is still a line)
		if (blank line) continue;
		else 
			removetrailling white space
			print line
*/
	while ((len = gl(line, MAXLINE)) > 0)
		if (len == 1) continue;
		else{
			removetrail(line, len);
			printf("%s", line);
		}
	return 0;
}

/* gl: read a line into s, return length */
int gl(char s[], int lim)
{
	int c, i;
	for (i = 0; i<lim-1 && (c=getchar()) != EOF && c !='\n'; ++i)
		s[i] = c;
	if (c == '\n') 
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void removetrail(char input[], int len)
{
	input[--len] = '\0';
	--len;
	while(input[len] == ' ' || input[len] == '\t')
	{	
		input[len] = '\0';
		--len;
	}
	input[len + 1] = '\n';
}
