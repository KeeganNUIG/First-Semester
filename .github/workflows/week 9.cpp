// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
int getLength(char string[]);
int isAlphabetical(char c); 
int isVowel(char c); 
int countVowels(char string[]); 
int countConsonants(char string[]);

int main()
{
	char string[81];
	int numVowels, numConsonants;
	puts("Enter string:");
	gets_s(string, 80);
	numVowels = countVowels(string);
	printf("Number of vowels = %d \n\n", numVowels);
	numConsonants = countConsonants(string);
	printf("Number of consonants = %d \n\n", numConsonants);
	return 0;
}

int getLength(char string[]) {
	int e = 0;
		while(string[e]!='\0'){
			e++;
		}
		return e;
}

int isAlphabetical(char c) {
	if ((97 <= c && c <= 122)||(65 <= c && c <= 90)) {
		return 1;
	}
	else {
		return 0;
	}	
}

int isVowel(char c) {
	if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85 || c == 97 || c == 101 || c == 105 || c == 111 || c == 117) {
		return 1;
	}
	else {
		return 0;
	}
}

int countVowels(char string[]) {
	int len = getLength(string);
	int vowels = 0;
	int i = 0;
	for (i = 0; i <= len; i++)
		if (isAlphabetical(string[i]) && isVowel(string[i]))
		{
			vowels += 1;
		}
	return vowels;
}

int countConsonants(char string[]) {
	int len = getLength(string);
	int Consonant = 0;
	int i = 0;
	for (i = 0; i < len; i++)
		if (isAlphabetical(string[i]) && !isVowel(string[i]))
		{
			Consonant += 1;
		}
	return Consonant;
}
