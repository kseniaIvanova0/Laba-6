/**************************
 * Author: Ivanova Ksenia *
 * Variant: 6             *
 * Name: Laba 6           *
 **************************/

#include <iostream>
#include <cmath>

using namespace std;

double sumElements(const double R[], int n) {
  double result = 0.0;
  for (int elementIndex = 0; elementIndex < n; ++elementIndex) {
    result += R[elementIndex];
  }
  return result;
}

double sumSquareRoots(const double R[], int n) {
  double result = 0.0;
  for (int elementIndex = 0; elementIndex < n; ++elementIndex) {
    if (R[elementIndex] >= 0.0) {
      result += sqrt(R[elementIndex]);
    }
  }
  return result;
}

int countNegatives(const double R[], int n) {
  int result = 0;
  for (int elementIndex = 0; elementIndex < n; ++elementIndex) {
    if (R[elementIndex] < 0.0) {
      ++result;
    }
  }
  return result;
}

int main() {
  int n;
  cout << "Enter array size: ";
  cin >> n;

  if (n < 1 || n > 100) {
    cout << "INVALID\n";
    return 0;
  }

  double R[100];
  cout << "Enter array elements: ";
  for (int elementIndex = 0; elementIndex < n; ++elementIndex) {
    cin >> R[elementIndex];
  }

  double sum = sumElements(R, n);
  double rootsSum = sumSquareRoots(R, n);
  int negativesCount = countNegatives(R, n);

  cout << "Sum: " << sum << "\n"
       << "Sum of roots: " << rootsSum << "\n"
       << "Negative count: " << negativesCount << "\n";

  return 0;
}