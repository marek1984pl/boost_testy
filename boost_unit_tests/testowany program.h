#pragma once

class KlasaTestowa
{
public:
	KlasaTestowa()
	{
	}

	~KlasaTestowa()
	{
	}

	int getSimpla_data() const;
	void setSimple_data(const int s_d);

private:
	int simple_data = 22;
};


int dodaj(int a, int b);

double dodaj(double a, double b);

double podziel(double a, double b);

int odejmij(int a, int b);