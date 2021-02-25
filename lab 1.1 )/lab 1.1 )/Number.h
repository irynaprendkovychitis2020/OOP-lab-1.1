#pragma once
class Number
{
	int first;
	double second;
public:
	Number()
	{
		first = 1;
		second = 0.5;
	}

	int GetFirst() const { return first; }
	unsigned int GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(double value);

	bool Init(int x, double y);
	void Display() const;
	void Read();

	void multiply(double N);
};

