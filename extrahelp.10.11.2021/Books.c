// this was created after .h

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "books.h"
#include <string.h>
#include <stdlib.h>

P_BOOKS createBook(double ISBN, char bookAuthor[], char bookTitle[], int volumeNumber) {

	P_BOOKS newBook = (P_BOOKS)malloc(sizeof(BOOKS)); // holding this in the heap
	//(pointer of books) (variable newbook) = (struct of Pointerbooks)(malloc-returns void pointer)(size of books array)
	newBook->ISBN = ISBN;
	strcpy(newBook->bookAuthor, bookAuthor);
	strcpy(newBook->bookTitle, bookTitle);
	newBook->volumeNumber = volumeNumber;

	newBook->next = NULL;

	return newBook;

}

void example(P_BOOKS lisitOfBooks) {

	return;
}

P_BOOKS searchTitle(P_BOOKS listOfBooks, char bookTitle[])
{
	if (listOfBooks == NULL) { // have one book?
		return NULL;
	}
	if (listOfBooks->next == NULL) { // have only one book? ( next book is not there- so cant search for name)
		if (strcmp(listOfBooks->bookTitle, bookTitle) == 1) { // is the one book the one we want

			return listOfBooks;
		}
		else {
			return NULL;

		}
	}
	
	P_BOOKS currentBook = listOfBooks;
	while (currentBook->next != NULL) {
		if (!strcmp(currentBook->bookTitle, bookTitle)) {

			return currentBook;
		}
		else {
			currentBook = currentBook->next;

		}
		
	}

}