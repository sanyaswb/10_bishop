#include <iostream>
#include <string>
#include <cmath>

bool bishop(int x1, int y1, int x2, int y2) {
	return abs(x1 - x2) == abs(y1 - y2);
}
