#include <vector>
#include <iostream>
#include "SdcHelper.h"

int main(int /*argc*/, char** /*argv*/)
{
  const unsigned int nnodes = 4;
  std::vector<double> weights;
  std::vector<double> nodes;
  sdc_helper::set_weights(nnodes, &weights, &nodes);
  for (int i=0; i<nnodes; i++)
  {
    std::cout << nodes[i] << std::endl;
  }
}
