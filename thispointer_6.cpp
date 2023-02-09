#include <iostream>

using namespace std;

struct Transaction {
	const int txID;
	const int fromID;
	const int toID;
	const int value;
};

class TransactionBuilder {
private:
	int _fromID;
	int _toID;
	int _value;

public:
	Transaction build() {
		int txID = _fromID ^ _toID ^ _value;
		return Transaction(txID, _fromID, _toID, _value);

	}
	TransactionBuilder& setFromID(int fromID)
	{
		_fromID = fromID;
		return *this;
	}
	TransactionBuilder& setToID(int toID) {
		_toID = toID;
		return *this;
	}
	TransactionBuilder& setValue(int value) {
		_value = value;
		return *this;
	}
};

int main() {



	Transaction tx0 = TransactionBuilder()
		.setFromID(1212)
		.setToID(4321)
		.setValue(4321)
		.build();
}