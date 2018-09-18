#include "Bitmap.h"

void BitmapInit(Bitmap *hbt, size_t n)
{
	assert(hbt);
	hbt->a = (char*)malloc(sizeof(char)*n);
	memset(hbt->a, 0, sizeof(char)*n);
	hbt->N = n;
}

void BitmapDestory(Bitmap *hbt)
{
	assert(hbt);
	free(hbt->a);
	hbt->a = NULL;
	hbt->N = 0;
}

void BitmapInsert(Bitmap *hbt, int n)
{
	assert(hbt);
	int index = n >> 3;
	int num = n % 8;
	hbt->a[index] |= 1 << num;
}

void BitmapRemove(Bitmap *hbt, int n)
{
	assert(hbt);
	int index = n >> 3;
	int num = n % 8;
	hbt->a[index] &= ~(1 << num);
}

void Test()
{
	Bitmap bt;
	BitmapInit(&bt, 100);
	BitmapInsert(&bt, 25);
	BitmapInsert(&bt, 630);
	BitmapInsert(&bt, 28);
	BitmapInsert(&bt, 63);
	BitmapInsert(&bt, 256);
	BitmapInsert(&bt, 635);
	BitmapInsert(&bt, 258);
	BitmapInsert(&bt, 6);
	BitmapDestory(&bt);
}