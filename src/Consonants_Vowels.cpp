/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){

	*consonants = 0;
	*vowels = 0;
	if (str == NULL)
		return;
	int i, j, flag = 0;
	char *vowel_set = "aeiouAEIOU";
	


	for (i = 0; str[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; j <= 9; j++)
		{
			if (str[i] == vowel_set[j])
			{
				*vowels = *vowels + 1;
				flag = 1;
			}
		}
		if (flag != 1)
		{
			if (str[i] > 'a' && str[i] <= 'z' || str[i] > 'A' && str[i] <= 'Z')
				*consonants = *consonants + 1;
		}
	}

}
