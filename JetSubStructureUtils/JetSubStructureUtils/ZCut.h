#ifndef jetsubstructureutils_zcut_header
#define jetsubstructureutils_zcut_header

#include "JetSubStructureUtils/SubstructureCalculator.h"

class ZCut : public SubstructureCalculator<double> { 
  public:
    ZCut(unsigned int nSubJets) : m_nSubJets(nSubJets) {};

    using SubstructureCalculator::result;
    virtual double result(const fastjet::PseudoJet &jet) const;

  private:
    unsigned int m_nSubJets;
};

#endif