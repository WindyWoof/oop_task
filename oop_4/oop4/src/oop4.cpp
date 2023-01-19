#include "oop4.h"
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

struct RingList
{
	Element* next, *prev;  
}

struct Ring 
{
	Element* current = NULL;
};

void pushNext(Ring& r, int d)
{
	Element* e = (Element*)malloc(sizeof(Element));
	e -> data = d;
	e -> next = r.currnet ->next;
	e -> prev = r.currnet;
	r.currnet -> next -> prev = e;
	r.current -> next = e;
}



void pushPrev(Ring& r, int d); 
int pull(Ring& r);
void goNext(Ring& r);
void goPrev(Ring& r);
void print(Ring& r);