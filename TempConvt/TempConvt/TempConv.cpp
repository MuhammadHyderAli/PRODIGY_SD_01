#include<iostream>
using namespace std;

void Celcius(float c)
{
	cout << "Temperture in Celcius = " << c << endl;
	float k;
	float f;
	k = c + 273.15;
	f = (c * 1.8) + 32;
	cout << "Kelvin = " << k << endl;
	cout << "Ferhnhiet = " << f << endl;
	
}
void kelvin(float k)
{
	cout << "Temperture in Kelvin = " << k << endl;
	float c;
	float f;
	c = k - 273.15;
	f = (k - 273.15) * 1.8 + 32;
	cout << "Celcius = " << c << endl;
	cout << "Ferhnhiet = " << f << endl;
}
void farhnhiet(float f)
{
	cout << "Temperture in Farhnhiet = " << f << endl;
	float c;
	float k;
	k = (f - 32) * 0.56 + 273.15;
	c = (f - 32) * 0.56;
	cout << "Kelvin = " << k << endl;
	cout << "Celcius = " << c << endl;

}
int main()
{

		int in;
		cout << "----------------Welcome to Temperature Converter--------------" << endl << endl;
		cout << "Enter 0 for Instructions" << endl;
		cout << "Enter 1 for Converting Celcius into Other Temperature" << endl;
		cout << "Enter 2 for Converting Kelvin into Other Temperature" << endl;
		cout << "Enter 3 for Converting Ferhnhiet into Other Temperature" << endl;
		cout << "Enter 4 to Exit" << endl;
		cin >> in;
  switch(in)
	{
		case 0:
		{
			cout << "If Temperature is in Celcius than it would be converted into Kelvin & Ferhnhiet" << endl;
			cout << "If Temperature is in Kelvin than it would be converted into Celcius & Ferhnhiet" << endl;
			cout << "If Temperature is in Ferhnhiet than it would be converted into kelvin & Celcius" << endl;
			break;
		}
		case 1:
		{
			float inp;
			cout << "Please Enter Celcius Temperature = ";
			cin >> inp;
			Celcius(inp);
			break;
		}
		case 2:
		{
			float inp;
			cout << "Please Enter Kelvin Temperature = ";
			cin >> inp;
			kelvin(inp);
			break;
		}
		case 3:
		{
			float inp;
			cout << "Please Enter Ferhnhiet Temperature = ";
			cin >> inp;
			farhnhiet(inp);
			break;
		}
		case 4:
		{
			cout << "Thanks for using Temperature Converter" << endl;
			break;
		}
		default:
		{
			cout << "Please Enter Correct Input" << endl;
		}
	}
	
}