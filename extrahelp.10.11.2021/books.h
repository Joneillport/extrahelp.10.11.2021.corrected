#pragma once
// started at books

#define MAXLEN 25

typedef struct books{
	double ISBN;
	char bookAuthor[MAXLEN];
	char bookTitle[MAXLEN];
	int volumeNumber;

	struct books* next; // linked list to struct of book

} BOOKS, *P_BOOKS; // type def the pointer to books into *P_BOOKS

P_BOOKS createBook(double, char[], char[], int);
P_BOOKS upDateList(P_BOOKS);
P_BOOKS searchTitle(P_BOOKS lisitOfBooks, char bookTitle[]);

