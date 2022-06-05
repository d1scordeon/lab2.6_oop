//LorryC.cpp
#include "LorryC.h"

int Lorry::Car::counter = 0;

Lorry::Car::Car()
	: model(""), cylinder(0), power(0)
{
	Lorry::Car::counter++;
}

Lorry::Car::Car(const string model, const int cylinder, const double power)
	: model(model), cylinder(cylinder), power(power)
{
	Lorry::Car::counter++;
}

Lorry::Car::Car(const Car& m)
	: model(m.model), cylinder(m.cylinder), power(m.power)
{
	Lorry::Car::counter++;
}

Lorry::Car::~Car(void)
{
	Lorry::Car::counter--;
}

Lorry::Car& Lorry::Car::operator = (const Car& m)
{
	this->model = m.model;
	this->cylinder = m.cylinder;
	this->power = m.power;

	return*this;
}

Lorry::Car::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "model = " << model << endl;
	ss << "cylinder = " << cylinder << endl;
	ss << "power = " << power << endl;

	return ss.str();
}

Lorry::Car& Lorry::Car::operator ++ ()
{
	++cylinder;
	return *this;
}

Lorry::Car& Lorry::Car::operator -- ()
{
	--cylinder;
	return *this;
}

Lorry::Car Lorry::Car::operator ++ (int)
{
	Car t(*this);
	power++;
	return t;
}

Lorry::Car Lorry::Car::operator -- (int)
{
	Car t(*this);
	power--;
	return t;
}

ostream& operator << (ostream& out, const Lorry::Car& m)
{
	out << string(m);
	return out;
}

istream& operator >> (istream& in, Lorry::Car& m)
{
	string model;
	int cylinder;
	double power;
	cout << endl;
	cout << "model = ? "; cin >> model;
	cout << "Your value must be positive!" << endl;
	cout << "cylinder = ? "; cin >> cylinder;
	cout << "power = ? "; cin >> power;
	m.setModel(model);
	m.setCylinder(cylinder);
	m.setPower(power);

	return in;
}

int Lorry::Car::getCounter()
{
	return Lorry::Car::counter;
}

////////////////////////////////////////////////////////////
// class Lorry

int Lorry::counter = 0;

Lorry::Lorry(const string model, const int cylinder, const double power, const int capacity_of_car)
	: car(model, cylinder, power), capacity_of_car(capacity_of_car)
{
	Lorry::counter++;
}

Lorry::Lorry(const Lorry& s)
{
	car = s.car;
	capacity_of_car = s.capacity_of_car;
	Lorry::counter++;
}

Lorry::~Lorry(void)
{
	Lorry::counter--;
}

Lorry& Lorry::operator =(const Lorry& s)
{
	car = s.car;
	capacity_of_car = s.capacity_of_car;
	return*this;
}

Lorry::operator string () const {
	stringstream ss;
	ss << "capacity = " << capacity_of_car << endl;
	return string(car) + ss.str();
}

Lorry& Lorry::operator ++ () {
	++car;
	return *this;
}

Lorry& Lorry::operator -- () {
	--car;
	return *this;
}

Lorry Lorry::operator ++ (int)
{
	Lorry s(*this);
	car++;
	return s;
}

Lorry Lorry::operator -- (int)
{
	Lorry s(*this);
	car--;
	return s;
}

ostream& operator << (ostream& out, const Lorry& s)
{
	out << string(s);
	return out;
}

istream& operator >> (istream& in, Lorry& s)
{
	int  capacity_of_car;
	cout << endl;
	cout << "Car = ? "; in >> s.car;
	cout << "capacity_of_car = ? "; in >> capacity_of_car;
	s.setCapacity_of_car(capacity_of_car);

	return in;
}

int Lorry::getCounter()
{
	return Lorry::counter;
}