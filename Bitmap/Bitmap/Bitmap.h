#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct Bitmap
{
	char *a;
	size_t N;
}Bitmap;

void BitmapInit(Bitmap *hbt, size_t n); //位图的初始化
void BitmapDestory(Bitmap *hbt); //位图的销毁

void BitmapInsert(Bitmap *hbt, int n); //插入
void BitmapRemove(Bitmap *hbt, int n); //删除


void Test();

//1.给定100亿个整数，设计算法找到只出现一次的整数
// 用两个比特位表示  00 代表不存在      01代表只存在一次        10代表存在多次
//占用内存为1个G（32位）

//2.给两个文件，分别有100亿个整数，我们只有1G内存，如何找到两个文件交集
//使用两个位图 只用一位表示即可 然后将两个位图进行按位与操作就可以得出
//两个文件的交集

//3.1个文件有100亿个int，1G内存，设计算法找到出现次数不超过2次的所有整数
//和第一个类似 这次我们可以用 00 表示不存在 01 代表存在一次 10代表存在两次
// 11代表多次（即两次以上） 最后遍历一遍位图就可以实现