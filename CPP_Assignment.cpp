// CPP Competency Assignment

#include "CPP_Assignment.h"

/*  main function start here */

int main()
{
	int i;
	
	Car obj1(2023, "VW");  // calling parameterized constructor.
	
	for(i=0; i!=5;++i) 			//this for loop will execute for 5 times until i becomes 0
	{
		obj1.Accelerate(); 		// call Accelerate function to accelerate the car by 10 speed.
	}
	cout << "\nCurrent speed of the car after accelerate 5 times\n";
	cout << obj1.GetSpeed(); // call Get speed function to get the speed details and print the current speed of the car after accelerate.	
	
	for(i=0; i!=5;++i) 				//this for loop will execute for 5 times until i becomes 0
	{
		obj1.Brake();				// call Brake function to Deaccelerate the car by 10 speed.
	}
	cout << "\nCurrent speed of the car after brake 5 times\n";
	cout << obj1.GetSpeed(); 	// call Get speed function to get the speed details and print the current speed of the car after Brake.

	return 0;
}

/* function definitions */
unsigned int Car::GetReleaseYear(void)
{
	return ReleaseYear;
}

string Car::GetCustomerName(void)
{
    return customer;
}

unsigned int Car::GetSpeed(void)
{
	return speed;
}

void Car::Accelerate(void)
{
	speed +=10;
}

void Car::Brake(void)
{
	speed -=10;
}

Car::Car()
{
	ReleaseYear = 0;
	customer = "";
	speed = 0;
	cout << "\nDefault constructor is called\n";
}

Car::~Car()
{
	cout << "\nDestructor is called\n";
}

Car::Car(unsigned int year, string customer1)
{
	ReleaseYear = year;
	customer = customer1;
	speed = 0;
	cout << "\nparametarized constructor is called\n";
}