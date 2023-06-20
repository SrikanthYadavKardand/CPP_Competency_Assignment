#include <iostream>
#include <string>
using namespace std;

/* Class definition */
class Car
{
    public:
	unsigned int GetSpeed(void);
	void Accelerate(void);
	void Brake(void);
	unsigned int GetReleaseYear(void);
	string GetCustomerName(void);

	
	private:
	string customer;
	unsigned int ReleaseYear;
	unsigned int speed;
};
