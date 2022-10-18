#include <iostream>
#include <stack>

int fibRec(int n) {
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	
	int sumRec = fibRec(n - 1) + fibRec(n - 2);
	return sumRec;
}


int fibstack(int n) {
	std::stack<int> sumStack;
	sumStack.push(n);
	int sumFib = 0;
	while (!sumStack.empty()) {
		int temp = sumStack.top();

		sumStack.pop();

		std::cout << "tempFib is " << temp << std::endl;
		
		int tempsec = temp - 2;
		int tempfir = temp - 1;

		if (tempfir >= 1) {
			sumStack.push(tempfir);
			if (tempfir == 1)
				sumFib += 0;
			if (tempfir == 2)
				sumFib += 1;
		}
		if (tempsec >= 1) {
			sumStack.push(tempsec);
			if (tempsec == 1)
				sumFib += 0;
			if (tempsec == 2)
				sumFib += 1;
		}
	}
	return sumFib;
}


int main() {

	std::cout << "sumRec is " << fibRec(5) << std::endl;

	std::cout << "fibstack is " << fibstack(5) << std::endl;

	return 0;
}
