using namespace std;

class Base {
public:
	Base() {
		cout << "Base class constr" << endl;
	}
};
class Der :public Base {
public:
	Der() {
		cout << "Der class const" << endl;
	}
};
int main() {
	for (int i{ 0 };i < 10;i++) {
		cout << i << endl;
	}
	
	return 1;
}