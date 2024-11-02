#ifndef BLA_FOR_HINF_H
#define BLA_FOR_HINF_H

#include <BasicLinearAlgebra.h> using namespace BLA;

template <int NUM_STATES, int NUM_INPUTS, int NUM_OUTPUTS>
class HinfFilter
{
private:
    /* data */
    BLA::Matrix<NUM_STATES,  NUM_STATES,  double> A;
    BLA::Matrix<NUM_STATES,  NUM_INPUTS,  double> B;
    BLA::Matrix<NUM_OUTPUTS, NUM_INPUTS,  double> C;
    BLA::Matrix<NUM_STATES,  1,           double> x;
    BLA::Matrix<NUM_OUTPUTS, 1,           double> y;
    BLA::Matrix<NUM_INPUTS,  1,           double> u;
    BLA::Matrix<NUM_STATES,  NUM_STATES,  double> P;
    BLA::Matrix<NUM_OUTPUTS, NUM_OUTPUTS, double> Vinv;
    BLA::Matrix<NUM_STATES,  NUM_STATES,  double> W;
    BLA::Eye   <NUM_STATES,  NUM_STATES,  double> I;
    BLA::Matrix<NUM_STATES,  NUM_STATES,  double> Q;
    double gamma;l
public:
    HinfFilter
    ~HinfFilter //not strictly necessary for an embedded application
};

HinfFilter
{
}

HinfFilter
{
}

template <int NUM_STATES, int NUM_INPUTS, int NUM_OUTPUTS>
void HinfFilter<int NUM_STATES, int NUM_INPUTS, int NUM_OUTPUTS>::predict(const BLA::Matrix<NUM_INPUTS,1,double> &u){
    this->x = this->A * this->x + this->B * u;
}

template <int NUM_STATES, int NUM_INPUTS, int NUM_OUTPUTS>
void HinfFilter<int NUM_STATES, int NUM_INPUTS, int NUM_OUTPUTS>::updateGPS(const BLA::Matrix<NUM_INPUTS,1,double> &u){
    this->x = this->A * this->x + this->B * u;
}

#endif

