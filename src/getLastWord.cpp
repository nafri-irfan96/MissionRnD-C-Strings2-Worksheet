/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str = "")
		return "";
	int i, j;
	i = j = 0;
	char *s;
	s = (char *)malloc(sizeof(char) * 100);
	while (str[i] != '\0')
		i++;
	while (str[i] == ' ')
		i--;
	while (str[i] != ' ' || i == 0)
		i--;
	i++;
	if (i == 1)
		return "";
	while (str[i] != '\0')
		s[j++] = str[i++];
	return s;
}
