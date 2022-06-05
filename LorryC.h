//LorryC.h
#pragma once
#pragma pack(1)
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Lorry
{
public:
	class Car
	{
	private:
		string model;
		int cylinder;
		double power;
		static int counter;

	public:
		string getModel() const { return model; }
		int getCylinder() const { return cylinder; }
		double getPower() const { return power; }

		void setModel(string model) { this->model = model; };
		void setCylinder(int cylinder) { this->cylinder = cylinder; };
		void setPower(double power) { this->power = power; };

		Car();
		Car(const string model, const int cylinder, const double power);
		Car(const Car& m);
		~Car(void);

		Car& operator = (const Car& m);
		operator string () const;

		Car& operator ++ ();
		Car& operator -- ();
		Car operator ++ (int);
		Car operator -- (int);

		friend ostream& operator << (ostream& out, const Car& m);
		friend istream& operator >> (istream& in, Car& m);

		static int getCounter();
	};
	int getCapacity_of_car() const { return capacity_of_car; }
	string getModel() const { return car.getModel(); }
	int getCylinder() const { return car.getCylinder(); }
	double getPower() const { return car.getPower(); }

	void setCapacity_of_car(int capacity_of_car) { this->capacity_of_car = capacity_of_car; }
	void setModel(string model) { car.setModel(model); }
	void setCylinder(int cylinder) { car.setCylinder(cylinder); }
	void setPower(double power) { car.setPower(power); }

	Lorry(const string model = "", const int cylinder = 0, const double power = 0, const int capacity_of_car = 0);
	Lorry(const Lorry& s);
	~Lorry(void);

	Lorry& operator = (const Lorry& s);
	operator string () const;

	Lorry& operator ++ ();
	Lorry& operator -- ();
	Lorry operator ++ (int);
	Lorry operator -- (int);

	friend ostream& operator << (ostream& out, const Lorry& s);
	friend istream& operator >> (istream& in, Lorry& s);

	static int getCounter();
private:
	int capacity_of_car;
	Car car;
	static int counter;
};