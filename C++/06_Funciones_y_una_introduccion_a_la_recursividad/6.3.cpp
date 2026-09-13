#include <iostream>
using std::cout;
using std::endl;

#include <cmath>
using std::ceil;
using std::cos;
using std::exp;
using std::fabs;
using std::floor;
using std::fmod;
using std::log;
using std::log10;
using std::pow;
using std::sin;
using std::sqrt;
using std::tan;

int main()
{
    //ceil
    cout << "ceil" << endl;
    cout << "ceil(9.2): " << ceil(9.2) << endl;
    cout << "ceil(-9.8): " << ceil(-9.8) << endl;

    //cos
    cout << "\ncos" << endl;
    cout << "cos(0.0): " << cos(0.0) << endl;

    //exp
    cout << "\nexp" << endl;
    cout << "exp(1.0): " << exp(1.0) << endl;
    cout << "exp(2.0): " << exp(2.0) << endl;

    //fabs
    cout << "\nfabs" << endl;
    cout << "fabs(5.1): " << fabs(5.1) << endl;
    cout << "fabs(0.0): " << fabs(0.0) << endl;
    cout << "fabs(-8.76): " << fabs(-8.76) << endl;

    //floor
    cout << "\nfloor" << endl;
    cout << "floor(9.2): " << floor(9.2) << endl;
    cout << "floor(-9.8): " << floor(-9.8) << endl;

    //fmod
    cout << "\nfmod" << endl;
    cout << "fmod(2.6, 1.2): " << fmod(2.6, 1.2) << endl;

    //log
    cout << "\nlog" << endl;
    cout << "log(2.718282): " << log(2.718282) << endl;
    cout << "log(7.389056): " << log(7.389056) << endl;

    //log10
    cout << "\nlog10" << endl;
    cout << "log10(10.0): " << log10(10.0) << endl;
    cout << "log10(100.0): " << log10(100.0) << endl;

    //pow
    cout << "\npow" << endl;
    cout << "pow(2, 7): " << pow(2, 7) << endl;
    cout << "pow(9, .5): " << pow(9, .5) << endl;

    //sin
    cout << "\nsin" << endl;
    cout << "sin(0.0): " << sin(0.0) << endl;

    //sqrt
    cout << "\nsqrt" << endl;
    cout << "sqrt(9.0): " << sqrt(9.0) << endl;

    //tan
    cout << "\ntan" << endl;
    cout << "tan(0.0): " << tan(0.0) << endl;

    return 0;
}
