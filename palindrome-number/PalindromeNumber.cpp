#include "PalindromeNumber.h"

#include <vector>

using namespace std;

PalindromeNumber::PalindromeNumber() {
}

bool PalindromeNumber::isPalindrome(int x) {
	if (x < 0) {
		return false;
	}

	std::vector<int> places;
	while (x != 0) {
		places.push_back(x % 10);
		x = x / 10;
	}

	for (int index = 0; index < places.size() / 2; index++) {
		if (!(places[index] == places[places.size() - 1 - index]))
			return false;
	}
	return true;
}
