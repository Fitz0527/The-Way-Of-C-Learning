// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
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
	cout << "四则运算计算器" << endl;
jumppointA:
	cout << endl;
	cout << "[1]加" << endl;
	cout << "[2]减" << endl;
	cout << "[3]乘" << endl;
	cout << "[4]除" << endl;
	cout << "[x]退出" << endl;
	char userchoose = 0;
	cout << "输入字符以进行下一步操作:";
	cin >> userchoose;
	if (userchoose == '1')
	{
	jumppoint1:
		cout << endl;
		cout << "[1]加" << endl;
		cout << endl;
		cout << "输入数字1：";
		long int numberA1 = 0;
		cin >> numberA1;
		cout << "输入数字2 :";
		long int numberA2 = 0;
		cin >> numberA2;
		cout << numberA1 << "+" << numberA2 << "=" << caulate1(numberA1, numberA2) << endl;
		jumppoint2:
		cout << "[r]再次计算   [m]显示主菜单并重新选择程序  [x]退出程序" << endl;
		cout << "输入字符以进行下一步操作:";
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
			cout << "无效输入，请重新输入"<<endl;
			goto jumppoint2;
		}
	}
	else if (userchoose == '2')
	{
	jumppoint3:
		cout << endl;
		cout << "[2]减" << endl;
		cout << endl;
		cout << "输入数字1：";
		long int numberB1 = 0;
		cin >> numberB1;
		cout << "输入数字2 :";
		long int numberB2 = 0;
		cin >> numberB2;
		
		long int result = 0;
		caulate2(numberB1, numberB2, result);
		cout << numberB1 << "-" << numberB2 << "=" << result<< endl;
		jumppoint4:
		cout << "[r]再次计算   [m]显示主菜单并重新选择程序  [x]退出程序" << endl;
		cout << "输入字符以进行下一步操作:";
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
			cout << "无效输入，请重新输入"<<endl;
			cout << endl;
			cout << endl;
			goto jumppoint4;
		}
	}
	else if (userchoose == '3')
	{
	jumppoint5:
		cout << endl;
		cout << "[3]乘" << endl;
		cout << endl;
		cout << "输入数字1：";
		long int numberC1 = 0;
		cin >> numberC1;
		cout << "输入数字2 :";
		long int numberC2 = 0;
		cin >> numberC2;

		long int result = 0;
		caulate3(numberC1, numberC2, result);
		cout << numberC1 << "X" << numberC2 << "=" << result << endl;
	jumppoint6:
		cout << "[r]再次计算   [m]显示主菜单并重新选择程序  [x]退出程序" << endl;
		cout << "输入字符以进行下一步操作:";
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
			cout << "无效输入，请重新输入" << endl;
			cout << endl;
			cout << endl;
			goto jumppoint6;
		}
	}
	else if (userchoose == '4')
	{
		cout << endl;
		cout << "[4]除" << endl;
	jumppointC:
		cout << endl;
	    cout << "输入被除数：";
	    double number1 = 0;
		cin >> number1;
		if (number1 == 0)
		{
			cout << "0不可做被除数，请重新输入";
			goto jumppointC;
		}


		  cout << "输入除数：";
		 double number2 = 0;
		cin >> number2;

		cout << number1 << "÷" << number2 << "=" << caulate4(number1, number2);

	jumppointD:
		cout << endl;
	    cout << "[r]再次计算   [m]显示主菜单并重新选择程序  [x]退出程序" << endl;
		cout << "输入字符以进行下一步操作:";
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
			cout << "无效输入" << endl;
			goto jumppointD;
		}

	}
	else if (userchoose == 'x')
		return 0;
	else
	{
		cout << endl;
		cout << "无效输入，请重新输入" << endl;
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
