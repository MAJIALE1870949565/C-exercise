#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//�ҵ��ַ�����
class MyString
{
	friend ostream& operator<<(ostream& cout,MyString & str);
	friend istream& operator >>(istream& cin,MyString & str);
public:
	//���캯��
	MyString(const char * str);//MyString str = "abcd";
	//��������
	MyString(const MyString & str);//MyString str2 = str;

	//����=
	MyString& operator=(const char * str);
	MyString& operator=(const MyString & str);

	//���� []
	char& operator[](int pos);

	//���� +
	MyString operator+(const char * str);
	MyString operator+(const MyString& str);

	//����==
	bool operator==(const char * str);
	bool operator==(const MyString& str);

	~MyString();
private:
	char * pString;//ά���ײ�������ٵ��ַ�����
	int m_Size;//�ַ������� ������\0
};