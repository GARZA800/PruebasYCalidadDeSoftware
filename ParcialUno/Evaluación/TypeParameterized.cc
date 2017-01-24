#include "TypeParameterized.h"

typedef testing::Types<bubble> implementations;

INSTANTIATE_TYPED_TEST_CASE_P(Prueba, TypeParameterized, implementations);