#ifndef jetsubstructuremoments_thrust_header
#define jetsubstructuremoments_thrust_header

#include "JetSubStructureUtils/SubstructureCalculator.h"

namespace JetSubStructureUtils {
  class Thrust : public SubstructureCalculator<std::map<std::string, double> > { 
    public:
      using SubstructureCalculator::result;
      virtual std::map<std::string, double> result(const fastjet::PseudoJet &jet) const;
  };
}

#endif
