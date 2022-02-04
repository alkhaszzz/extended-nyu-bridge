#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int length, numEntered, seqTotal = 1, i;
	double geoMean;

   cout << "Please enter the length of the sequence: ";
   cin >> length;
   cout << "Please enter your sequence: " << endl;
   
   cout << "section a" << endl;
   for (i = 0; i < length; i++) {
	   cin >> numEntered;
	   seqTotal *= numEntered;
	   geoMean = pow(seqTotal, 1.0 / (double)length);
   }
   cout << "The geometric mean is: " << geoMean << endl;

   bool endOfInput;
   int numEnteredB, seqTotalB = 1, numsIn = 0;
   double geoMeanB;

   cout << "Please enter your sequence: " << endl;
   cout << "End sequence by typing - 1" << endl;
   cout << "section b" << endl;
   
   endOfInput = false;
   while (endOfInput == false) {
	   cin >> numEnteredB;
	   if (numEnteredB == -1) {
		   endOfInput = true;
	   }
	   else {
		   seqTotalB *= numEnteredB;
		   numsIn++;
	   }
   }

   geoMeanB = pow(seqTotalB, 1.0 / (double)numsIn);

   cout << "The geometric mean is: " << geoMeanB << endl;
   
   return 0;
}
