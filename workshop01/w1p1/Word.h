/*
Name         : Manav Alpeshbhai Zadafiya
Student Id   : 144095221
E-mail       : mazadafiya@myseneca.ca
Secion       : ZCC
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*/
#pragma once
#ifndef SDDS_WORD_H
#define SDDS_WORD_H
namespace sdds {
	const int MAX_WORD_LEN = 21;
	struct Word
	{
		char letters[MAX_WORD_LEN];
		int count;
	};
	// Your header file content goes here
	void programTitle(void);
	void wordStats(const char* filename);
	int totalCount(const Word* words, int num);
	void sort(Word words[], int cnt, int sortType);
	void swap(Word* p1, Word* p2);
	void listWords(const Word words[], int noOfWords, const char* theTitle);
	int findMaxLen(const Word words[], int noOfWords);
	void print(const Word* w, int gotoNextLine, int len);
	void totalWordsStat(int totNoWrds, int totalOverAll, int longestWord);
	void endList();
	void title(const char* value, int len);
	void addWord(Word words[], int* index, const char newWord[]);
	int readWord(char* word, FILE* fptr, int maxLen);
	int searchWords(const Word words[], int num, const char word[]);
	void MyFunc();

}
#endif