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

void BitmapInit(Bitmap *hbt, size_t n); //λͼ�ĳ�ʼ��
void BitmapDestory(Bitmap *hbt); //λͼ������

void BitmapInsert(Bitmap *hbt, int n); //����
void BitmapRemove(Bitmap *hbt, int n); //ɾ��


void Test();

//1.����100�ڸ�����������㷨�ҵ�ֻ����һ�ε�����
// ����������λ��ʾ  00 ��������      01����ֻ����һ��        10������ڶ��
//ռ���ڴ�Ϊ1��G��32λ��

//2.�������ļ����ֱ���100�ڸ�����������ֻ��1G�ڴ棬����ҵ������ļ�����
//ʹ������λͼ ֻ��һλ��ʾ���� Ȼ������λͼ���а�λ������Ϳ��Եó�
//�����ļ��Ľ���

//3.1���ļ���100�ڸ�int��1G�ڴ棬����㷨�ҵ����ִ���������2�ε���������
//�͵�һ������ ������ǿ����� 00 ��ʾ������ 01 �������һ�� 10�����������
// 11�����Σ����������ϣ� ������һ��λͼ�Ϳ���ʵ��