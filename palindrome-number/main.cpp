// palindrome-number.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

#include "PalindromeNumber.h"

int main()
{
	auto palindromeNumber = new PalindromeNumber();

	printf("%s\n", palindromeNumber->isPalindrome(123)? "true":"false");
	
    return 0;
}

