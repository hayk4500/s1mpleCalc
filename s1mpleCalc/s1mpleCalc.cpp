#include <iostream>

using namespace std;

class Math {
private:
	double num1;
	double num2;
	double num3;
	char ch;
public:
	void GetNum() {
		cin >> num1 >> ch >> num2;
	}

	double AddNum(double x, double y) {
		double n = x + y; return n;
	}
	double SubNum(double x, double y) {
		double n = x - y; return n;
	}
	double MultNum(double x, double y) {
		double n = x * y; return n;
	}
	double DivNum(double x, double y) {
		double n = x / y; return n;
	}

	void SelectOp() {
		switch (ch) {
		case '+': num3 = AddNum(num1, num2); break;
		case '-': num3 = SubNum(num1, num2); break;
		case '*': num3 = MultNum(num1, num2); break;
		case '/': num3 = DivNum(num1, num2); break;
		default: cout << "Incorrect operand! Try again!" << endl;
		}
	}

	void ShowResult() {
		cout << "Result is: " << num3 << endl;
	}
};

int main() {
	Math n;
	cout << "Enter the two number and operand beetween them \n ('+' --- add, '-' --- sub, '*' --- mult, '/' --- div)" << endl;
	n.GetNum(); n.SelectOp(); n.ShowResult();
	return 0;
}