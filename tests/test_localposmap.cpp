#include <iostream>
#include <memory>

#include <detworam/posmap.h>
#include <detworam/memory.h>

#include "pmtest.h"

using namespace std;
using namespace detworam;

template <size_t N, size_t M>
struct Fact {
  using T = LocalPosMap<N, M>;
  static auto create() { return std::make_unique<T>(); }
};

int main() {
  // generic tests with different sizes
  if (test_pm<Fact>()()) return 1;

  cout << "pass" << endl;
  return 0;
}
