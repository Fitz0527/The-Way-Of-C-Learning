// ConsoleApplication4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

long int caulate1(long int num1, long int num2);
int caulate2(long int num1, long int num2,long int&result);
int caulate3(long int num1, long int num2, long int&result);
double caulate4(double num1, double num2);


int main()
{
	cout << "�������������" << endl;
jumppointA:
	cout << endl;
	cout << "[1]��" << endl;
	cout << "[2]��" << endl;
	cout << "[3]��" << endl;
	cout << "[4]��" << endl;
	cout << "[x]�˳�" << endl;
	char userchoose = 0;
	cout << "�����ַ��Խ�����һ������:";
	cin >> userchoose;
	if (userchoose == '1')
	{
	jumppoint1:
		cout << endl;
		cout << "[1]��" << endl;
		cout << endl;
		cout << "��������1��";
		long int numberA1 = 0;
		cin >> numberA1;
		cout << "��������2 :";
		long int numberA2 = 0;
		cin >> numberA2;
		cout << numberA1 << "+" << numberA2 << "=" << caulate1(numberA1, numberA2) << endl;
		jumppoint2:
		cout << "[r]�ٴμ���   [m]��ʾ���˵�������ѡ�����  [x]�˳�����" << endl;
		cout << "�����ַ��Խ�����һ������:";
		char userchooseA = 'm';
		cin >> userchooseA;
		if (userchooseA == 'r')
			goto jumppoint1;
		else if (userchooseA == 'm')
			goto jumppointA;
		else if (userchooseA == 'x')
			return 0;
		else
		{
			cout << "��Ч���룬����������"<<endl;
			goto jumppoint2;
		}
	}
	else if (userchoose == '2')
	{
	jumppoint3:
		cout << endl;
		cout << "[2]��" << endl;
		cout << endl;
		cout << "��������1��";
		long int numberB1 = 0;
		cin >> numberB1;
		cout << "��������2 :";
		long int numberB2 = 0;
		cin >> numberB2;
		
		long int result = 0;
		caulate2(numberB1, numberB2, result);
		cout << numberB1 << "-" << numberB2 << "=" << result<< endl;
		jumppoint4:
		cout << "[r]�ٴμ���   [m]��ʾ���˵�������ѡ�����  [x]�˳�����" << endl;
		cout << "�����ַ��Խ�����һ������:";
		char userchooseA = 'm';
		cin >> userchooseA;
		if (userchooseA == 'r')
			goto jumppoint3;
		else if (userchooseA == 'm')
			goto jumppointA;
		else if (userchooseA == 'x')
			return 0;
		else
		{
			cout << "��Ч���룬����������"<<endl;
			cout << endl;
			cout << endl;
			goto jumppoint4;
		}
	}
	else if (userchoose == '3')
	{
	jumppoint5:
		cout << endl;
		cout << "[3]��" << endl;
		cout << endl;
		cout << "��������1��";
		long int numberC1 = 0;
		cin >> numberC1;
		cout << "��������2 :";
		long int numberC2 = 0;
		cin >> numberC2;

		long int result = 0;
		caulate3(numberC1, numberC2, result);
		cout << numberC1 << "X" << numberC2 << "=" << result << endl;
	jumppoint6:
		cout << "[r]�ٴμ���   [m]��ʾ���˵�������ѡ�����  [x]�˳�����" << endl;
		cout << "�����ַ��Խ�����һ������:";
		char userchooseA = 'm';
		cin >> userchooseA;
		if (userchooseA == 'r')
			goto jumppoint5;
		else if (userchooseA == 'm')
			goto jumppointA;
		else if (userchooseA == 'x')
			return 0;
		else
		{
			cout << "��Ч���룬����������" << endl;
			cout << endl;
			cout << endl;
			goto jumppoint6;
		}
	}
	else if (userchoose == '4')
	{
		cout << endl;
		cout << "[4]��" << endl;
	jumppointC:
		cout << endl;
	    cout << "���뱻������";
	    double number1 = 0;
		cin >> number1;
		if (number1 == 0)
		{
			cout << "0������������������������";
			goto jumppointC;
		}


		  cout << "���������";
		 double number2 = 0;
		cin >> number2;

		cout << number1 << "��" << number2 << "=" << caulate4(number1, number2);

	jumppointD:
		cout << endl;
	    cout << "[r]�ٴμ���   [m]��ʾ���˵�������ѡ�����  [x]�˳�����" << endl;
		cout << "�����ַ��Խ�����һ������:";
		char userchooseA = 'm';
		cin >> userchooseA;
		if (userchooseA == 'r')
			goto jumppointC;
		else if (userchooseA == 'm')
			goto jumppointA;
		else if (userchooseA == 'x')
			return 0;
		else
		{
			cout << "��Ч����" << endl;
			goto jumppointD;
		}

	}
	else if (userchoose == 'x')
		return 0;
	else
	{
		cout << endl;
		cout << "��Ч���룬����������" << endl;
		goto jumppointA;
	}
	return 0;
}

long int caulate1(long int num1, long int num2)
{
	long int result=num1+num2 ;
	return result;
}

int caulate2(long int num1, long int num2,long int& result)
{
	result = num1 - num2;
	return 0;
}

int caulate3(long int num1, long int num2, long int & result)
{
     result = num1*num2;
	return 0;
}

double caulate4(double num1, double num2)
{
	double result = num1 / num2;
	return result;
}
