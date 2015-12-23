
/****************************************************************************
  Project Euler - Problem 1                                                 *
                                                                            *
  Description: If we list all the natural numbers below 10 that are         *
    multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples   *
	is 23. Find the sum of all the multiples of 3 or 5 below 1000.          *
	                                                                        *
  Written by: Kyle Williams @ 22 Dec 2015                                   *
 ****************************************************************************/
 
 #include <iostream>
 #include <vector>
 #include <algorithm>
 
 using namespace std;
 
 int main() {
	vector<int> multiples;
	vector<int>::iterator it;
	int sum = 0;
	
	for (int i = 3; i < 1000; i++) {
		
		// don't count same prime twice
		if (find(multiples.begin(), multiples.end(), i) != multiples.end()) {
			continue;
		}
		else if (i % 3 == 0 || i % 5 == 0) {
			multiples.push_back(i);
		}
	}

	for (it = multiples.begin(); it != multiples.end(); it++) {
		sum += *it;
	}

	cout << sum;
	cin.get();
 }