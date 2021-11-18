///library needs  system to keep track of books
///search  for specific book and find info about book
/// add or remove book
/// 
/// 
/// linked list trial
/// 

#include <stdio.h>
#include "books.h"
#include <string.h>
#include <stdlib.h>

/// 
int main() {
	

	P_BOOKS book1 = createBook(2111212, " random Author", "random title one", 32);
	P_BOOKS book2 = createBook(2111212, " random Author", "random title two", 42);
	P_BOOKS book3 = createBook(2111212, " random Author", "random title three", 35);


	book1->next = book2;
	book2->next = book3;

	P_BOOKS searchResult = searchTitle(book1, "random title two");

	example(book2);
	return 0;
}