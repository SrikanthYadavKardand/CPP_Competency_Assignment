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
	void HmiDisplayFunction(string*);
	void HmiDisplayFunction(unsigned int*, unsigned int*);
	
	Car();
	~Car();
	Car(unsigned int year, string customer1);
	
	private:
	string customer;
	unsigned int ReleaseYear;
	unsigned int speed;
};
