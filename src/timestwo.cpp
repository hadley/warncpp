#include <Rcpp.h>
using namespace Rcpp;
#include <boost/container/string.hpp>

// [[Rcpp::export]]
NumericVector timesTwo(NumericVector x) {
  return x * 2;
}
