#include <stdio.h>
#include <functional>
#include <stdlib.h>

using namespace std;

typedef std::function<bool()> BIGGER;

bool  isbigger(int a, int b,BIGGER big) {
	return big();
}

int main() {

	using std::placeholders::_1;

	int a = 4, b = 3;

	auto f = [&] ()mutable->bool {return a > b; };

	bool ret = f();

	if (ret)
		printf("a>b");
	else
		printf("a<b");

	system("pause");
}

