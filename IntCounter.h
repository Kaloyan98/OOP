#pragma once

class IntCounter {
private:
	int* ptr;
	int* counter;

	void add_reference();
	void remove_reference();
	void freeMemory();

	void redirectPointers(int* newPtr, int* newCounter);
	void redirectPointers(const IntCounter& rhs);

public:
	IntCounter();

	IntCounter(int* newPtr);
	IntCounter(const IntCounter& rhs);
	IntCounter& operator=(const IntCounter& rhs);
	~IntCounter();

	int get_count() const;
	int get_value() const;
};
