
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector crt(NumericVector y, double r) {
  int n = y.size();
  NumericVector l(n);
  
  for(int i = 0; i < n; ++i) {
    int yi = y[i];
    int sum = 0;
    for(int j = 0; j < yi; j ++) {
      double u = R::runif(0,1);
      double p = r/(r + j + 1 -1);
      if(u <= p) {
        sum = sum + 1;
      }
    }
    l[i] = sum;
  }
  return(l);
}
