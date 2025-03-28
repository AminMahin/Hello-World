#pragma once

#include <vector>

template <typename T>
class Matrix {
private:
  using row_t = std::vector<T>;
  std::vector< row_t > matrix;