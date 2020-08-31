#include "qonum.h"
#include "constants.h"
#include <stdlib.h>
#include <math.h>
int isPrime(unsigned long long possiblePrime) {
	if(possiblePrime % 2 == 0) {
		return False;
	}

	for(unsigned long x = 3; x < sqrt(possiblePrime); x+=2) {
		if(possiblePrime % x == 0) {
			return False;
		}
	}

	return True;
}
