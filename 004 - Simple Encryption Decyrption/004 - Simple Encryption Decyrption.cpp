// 004 - Simple Encryption Decyrption.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string encypt(string s)
{
	string encyptedString;
	for (int i = 0; i < s.length(); i++)
	{
		char c = s[i];
		encyptedString += ((char)((int)c + 1));
	}
	return encyptedString;
}

string decrypt(string s)
{
	string decryptedString;
	for (int i = 0; i < s.length(); i++)
	{
		char c = s[i];
		decryptedString += ((char)((int)c - 1));
	}
	return decryptedString;
}

int _tmain(int argc, _TCHAR* argv[])
{
	string toBeEncrypted;
	string encrypted;
	cout << "This program performs simple ecryption and decryption on a user entered string." << endl;
	cout << "Enter the string you want to encrypt: ";
	cin >> toBeEncrypted;
	encrypted = encypt(toBeEncrypted);
	cout << "Your encrypted string is: " << encrypted << endl;
	cout << "Your decrypted string is: " << decrypt(encrypted) << endl;
	system("Pause");
	return 0;
}

