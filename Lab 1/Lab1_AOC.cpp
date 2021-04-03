//Piven Denys K-21
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

long double max(long double a, long double b);
long double Maximum(long double a1, long double a2, long double a3,
	long double a4, long double a5, long double a6,
	long double a7, long double a8, long double a9,
	long double a10, long double a11, long double a12,
	long double a13, long double a14, long double a15,
	long double a16, long double a17, long double a18,
	long double a19, long double a20);
void XOutput(int n);

int main()
{
	clock_t TheStart = 0, TheEnd = 0;
	TheStart = clock();

	//1.7 GHz
	float FLOAT_ITER = 1000000000;
	clock_t start = 0, end = 0;

	long i = 0;

	int IntA = 1, IntB = 2, IntC = 3;
	long LongA = 1, LongB = 2, LongC = 3;
	float FloatA = 1, FloatB = 2, FloatC = 3;
	double DoubleA = 1, DoubleB = 2, DoubleC = 3;
	char CharA = 'a', CharB = 'b', CharC = 'c';
	
	//empty
	start = clock();
	for (i = 0; i < FLOAT_ITER; i++)
	{
		IntA = IntB;
	}
	end = clock();
	clock_t emptyTime = end - start;
	//clock_t emptyTime = 0;

	/**********************************Int**********************************/
	//add int
	start = clock();
	for (i = 0; i < FLOAT_ITER; i++)
	{
		IntA = IntB + IntC;
	}
	end = clock();
	clock_t addTimeInt = end - start;
	long double addPerSecInt =
		FLOAT_ITER * CLOCKS_PER_SEC / (addTimeInt - emptyTime);

	//subtr int
	start = clock();
	for (i = 0; i < FLOAT_ITER; i++)
	{
		IntA = IntB - IntC;
	}
	end = clock();
	clock_t subtrTimeInt = end - start;
	long double subtrPerSecInt =
		FLOAT_ITER * CLOCKS_PER_SEC / (subtrTimeInt - emptyTime);

	//mult int
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		IntA = IntB * IntC;
	}
	end = clock();
	clock_t multTimeInt = end - start;
	long double multPerSecInt =
		FLOAT_ITER * CLOCKS_PER_SEC / (multTimeInt - emptyTime);

	//div int
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		IntA = IntB / IntC;
	}
	end = clock();
	clock_t divTimeInt = end - start;
	long double divPerSecInt =
		FLOAT_ITER * CLOCKS_PER_SEC / (divTimeInt - emptyTime);
	/**********************************************************************/

	/*********************************Long*********************************/
	//add Long
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		LongA = LongB + LongC;
	}
	end = clock();
	clock_t addTimeLong = end - start;
	long double addPerSecLong =
		FLOAT_ITER * CLOCKS_PER_SEC / (addTimeLong - emptyTime);

	//subtr Long
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		LongA = LongB - LongC;
	}
	end = clock();
	clock_t subtrTimeLong = end - start;
	long double subtrPerSecLong =
		FLOAT_ITER * CLOCKS_PER_SEC / (subtrTimeLong - emptyTime);

	//mult Long
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		LongA = LongB * LongC;
	}
	end = clock();
	clock_t multTimeLong = end - start;
	long double multPerSecLong =
		FLOAT_ITER * CLOCKS_PER_SEC / (multTimeLong - emptyTime);

	//div Long
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		LongA = LongB / LongC;
	}
	end = clock();
	clock_t divTimeLong = end - start;
	long double divPerSecLong =
		FLOAT_ITER * CLOCKS_PER_SEC / (divTimeLong - emptyTime);
	/**********************************************************************/

	/********************************Float*********************************/
	//add Float
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		FloatA = FloatB + FloatC;
	}
	end = clock();
	clock_t addTimeFloat = end - start;
	long double addPerSecFloat =
		FLOAT_ITER * CLOCKS_PER_SEC / (addTimeFloat - emptyTime);

	//subtr Float
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		FloatA = FloatB - FloatC;
	}
	end = clock();
	clock_t subtrTimeFloat = end - start;
	long double subtrPerSecFloat =
		FLOAT_ITER * CLOCKS_PER_SEC / (subtrTimeFloat - emptyTime);

	//mult Float
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		FloatA = FloatB * FloatC;
	}
	end = clock();
	clock_t multTimeFloat = end - start;
	long double multPerSecFloat =
		FLOAT_ITER * CLOCKS_PER_SEC / (multTimeFloat - emptyTime);

	//div Float
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		FloatA = FloatB / FloatC;
	}
	end = clock();
	clock_t divTimeFloat = end - start;
	long double divPerSecFloat =
		FLOAT_ITER * CLOCKS_PER_SEC / (divTimeFloat - emptyTime);
	/**********************************************************************/

	/********************************Double********************************/
	//add Double
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		DoubleA = DoubleB + DoubleC;
	}
	end = clock();
	clock_t addTimeDouble = end - start;
	long double addPerSecDouble =
		FLOAT_ITER * CLOCKS_PER_SEC / (addTimeDouble - emptyTime);

	//subtr Double
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		DoubleA = DoubleB - DoubleC;
	}
	end = clock();
	clock_t subtrTimeDouble = end - start;
	long double subtrPerSecDouble =
		FLOAT_ITER * CLOCKS_PER_SEC / (subtrTimeDouble - emptyTime);

	//mult Double
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		DoubleA = DoubleB * DoubleC;
	}
	end = clock();
	clock_t multTimeDouble = end - start;
	long double multPerSecDouble =
		FLOAT_ITER * CLOCKS_PER_SEC / (multTimeDouble - emptyTime);

	//div Double
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		DoubleA = DoubleB / DoubleC;
	}
	end = clock();
	clock_t divTimeDouble = end - start;
	long double divPerSecDouble =
		FLOAT_ITER * CLOCKS_PER_SEC / (divTimeDouble - emptyTime);
	/**********************************************************************/

	/*********************************Char*********************************/
	//add Char
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		CharA = CharB + CharC;
	}
	end = clock();
	clock_t addTimeChar = end - start;
	long double addPerSecChar =
		FLOAT_ITER * CLOCKS_PER_SEC / (addTimeChar - emptyTime);

	//subtr Char
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		CharA = CharB - CharC;
	}
	end = clock();
	clock_t subtrTimeChar = end - start;
	long double subtrPerSecChar =
		FLOAT_ITER * CLOCKS_PER_SEC / (subtrTimeChar - emptyTime);

	//mult Char
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		CharA = CharB * CharC;
	}
	end = clock();
	clock_t multTimeChar = end - start;
	long double multPerSecChar =
		FLOAT_ITER * CLOCKS_PER_SEC / (multTimeChar - emptyTime);

	//div Char
	start = clock();
	for ( i = 0; i < FLOAT_ITER; i++)
	{
		CharA = CharB / CharC;
	}
	end = clock();
	clock_t divTimeChar = end - start;
	long double divPerSecChar =
		FLOAT_ITER * CLOCKS_PER_SEC / (divTimeChar - emptyTime);
	/**********************************************************************/

	/*******************************Ratio**********************************/

	long double MaxOperPerSec =
		Maximum(addPerSecInt, subtrPerSecInt, multPerSecInt, divPerSecInt,
			addPerSecLong, subtrPerSecLong, multPerSecLong, divPerSecLong,
			addPerSecFloat, subtrPerSecFloat, multPerSecFloat,
			divPerSecFloat, addPerSecDouble, subtrPerSecDouble,
			multPerSecDouble, divPerSecDouble, addPerSecChar,
			subtrPerSecChar, multPerSecChar, divPerSecChar);

	//Int
	long double addRatioInt = addPerSecInt / MaxOperPerSec;
	long double subtrRatioInt = subtrPerSecInt / MaxOperPerSec;
	long double multRatioInt = multPerSecInt / MaxOperPerSec;
	long double divRatioInt = divPerSecInt / MaxOperPerSec;

	//Long
	long double addRatioLong = addPerSecLong / MaxOperPerSec;
	long double subtrRatioLong = subtrPerSecLong / MaxOperPerSec;
	long double multRatioLong = multPerSecLong / MaxOperPerSec;
	long double divRatioLong = divPerSecLong / MaxOperPerSec;

	//Float
	long double addRatioFloat = addPerSecFloat / MaxOperPerSec;
	long double subtrRatioFloat = subtrPerSecFloat / MaxOperPerSec;
	long double multRatioFloat = multPerSecFloat / MaxOperPerSec;
	long double divRatioFloat = divPerSecFloat / MaxOperPerSec;

	//Double
	long double addRatioDouble = addPerSecDouble / MaxOperPerSec;
	long double subtrRatioDouble = subtrPerSecDouble / MaxOperPerSec;
	long double multRatioDouble = multPerSecDouble / MaxOperPerSec;
	long double divRatioDouble = divPerSecDouble / MaxOperPerSec;

	//Char
	long double addRatioChar = addPerSecChar / MaxOperPerSec;
	long double subtrRatioChar = subtrPerSecChar / MaxOperPerSec;
	long double multRatioChar = multPerSecChar / MaxOperPerSec;
	long double divRatioChar = divPerSecChar / MaxOperPerSec;
	/********************************************************************/

	/****************************Percent*********************************/

	//Int
	cout << "+	int	" << setw(11) << addPerSecInt << "	";
	XOutput(50 * addRatioInt);
	cout << "	" << (int)(100 * addRatioInt) << '%' << endl;

	cout << "-	int	" << setw(11) << subtrPerSecInt << "	";
	XOutput(50 * subtrRatioInt);
	cout << "	" << (int)(100 * subtrRatioInt) << '%' << endl;

	cout << "*	int	" << setw(11) << multPerSecInt << "	";
	XOutput(50 * multRatioInt);
	cout << "	" << (int)(100 * multRatioInt) << '%' << endl;

	cout << "/	int	" << setw(11) << divPerSecInt << "	";
	XOutput(50 * divRatioInt);
	cout << "	" << (int)(100 * divRatioInt) << '%' << endl;

	//Long
	cout << "+	Long	" << setw(11) << addPerSecLong << "	";
	XOutput(50 * addRatioLong);
	cout << "	" << (int)(100 * addRatioLong) << '%' << endl;

	cout << "-	Long	" << setw(11) << subtrPerSecLong << "	";
	XOutput(50 * subtrRatioLong);
	cout << "	" << (int)(100 * subtrRatioLong) << '%' << endl;

	cout << "*	Long	" << setw(11) << multPerSecLong << "	";
	XOutput(50 * multRatioLong);
	cout << "	" << (int)(100 * multRatioLong) << '%' << endl;

	cout << "/	Long	" << setw(11) << divPerSecLong << "	";
	XOutput(50 * divRatioLong);
	cout << "	" << (int)(100 * divRatioLong) << '%' << endl;

	//Float
	cout << "+	Float	" << setw(11) << addPerSecFloat << "	";
	XOutput(50 * addRatioFloat);
	cout << "	" << (int)(100 * addRatioFloat) << '%' << endl;

	cout << "-	Float	" << setw(11) << subtrPerSecFloat << "	";
	XOutput(50 * subtrRatioFloat);
	cout << "	" << (int)(100 * subtrRatioFloat) << '%' << endl;

	cout << "*	Float	" << setw(11) << multPerSecFloat << "	";
	XOutput(50 * multRatioFloat);
	cout << "	" << (int)(100 * multRatioFloat) << '%' << endl;

	cout << "/	Float	" << setw(11) << divPerSecFloat << "	";
	XOutput(50 * divRatioFloat);
	cout << "	" << (int)(100 * divRatioFloat) << '%' << endl;

	//Double
	cout << "+	Double	" << setw(11) << addPerSecDouble << "	";
	XOutput(50 * addRatioDouble);
	cout << "	" << (int)(100 * addRatioDouble) << '%' << endl;

	cout << "-	Double	" << setw(11) << subtrPerSecDouble << "	";
	XOutput(50 * subtrRatioDouble);
	cout << "	" << (int)(100 * subtrRatioDouble) << '%' << endl;

	cout << "*	Double	" << setw(11) << multPerSecDouble << "	";
	XOutput(50 * multRatioDouble);
	cout << "	" << (int)(100 * multRatioDouble) << '%' << endl;

	cout << "/	Double	" << setw(11) << divPerSecDouble << "	";
	XOutput(50 * divRatioDouble);
	cout << "	" << (int)(100 * divRatioDouble) << '%' << endl;

	//Char
	cout << "+	Char	" << setw(11) << addPerSecChar << "	";
	XOutput(50 * addRatioChar);
	cout << "	" << (int)(100 * addRatioChar) << '%' << endl;

	cout << "-	Char	" << setw(11) << subtrPerSecChar << "	";
	XOutput(50 * subtrRatioChar);
	cout << "	" << (int)(100 * subtrRatioChar) << '%' << endl;

	cout << "*	Char	" << setw(11) << multPerSecChar << "	";
	XOutput(50 * multRatioChar);
	cout << "	" << (int)(100 * multRatioChar) << '%' << endl;

	cout << "/	Char	" << setw(11) << divPerSecChar << "	";
	XOutput(50 * divRatioChar);
	cout << "	" << (int)(100 * divRatioChar) << '%' << endl;
	/********************************************************************/

	TheEnd = clock();
	clock_t TheTime = TheEnd - TheStart;
	cout << "The Time:	" << TheTime / CLOCKS_PER_SEC << " seconds" << endl;

	system("pause");
	return 0;
}

long double max(long double a, long double b)
{
	if (a > b)
		return a;
	else
		return b;
}

long double Maximum(long double a1, long double a2, long double a3, long double a4,
	long double a5, long double a6, long double a7, long double a8,
	long double a9, long double a10, long double a11, long double a12,
	long double a13, long double a14, long double a15, long double a16,
	long double a17, long double a18, long double a19, long double a20)
{
	return
		max(
			max(
				max(
					max(
						max(a1, a2),
						max(a3, a4)),
					max(
						max(a5, a6),
						max(a7, a8))),
				max(
					max(a9, a10),
					max(a11, a12))),
			max(
				max(
					max(a13, a14),
					max(a15, a16)),
				max(
					max(a17, a18),
					max(a19, a20))));
}

void XOutput(int n)
{
	if (n < 0)
	{
		for (size_t i = 0; i < 5; i++)
		{
			cout << "*MISSTAKE%";
		}
	}
	else
	{
		for (size_t i = 0; i < n; i++)
		{
			cout << 'X';
		}
		for (size_t i = 0; i < 50 - n; i++)
		{
			cout << ' ';
		}
	}
}
