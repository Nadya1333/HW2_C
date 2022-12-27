#include "funcs.h"
/*Chekulaeva N., Shatikova A., 21BI1
Each task is enclosed in "/*.../" so that you can run each task separately.
*/


int main() {
    /* // Задача 1
    std::cout << "Task 1" << std::endl;
    test1();
    */
   
    /* // Задача 2
    std::cout << "Task 2" << std::endl;
    test2();
    */
     

     /*// Задача 3
     std::cout << "Task 3" << std::endl;
     test3();
     */
     

     /*//Задача 4
     std::cout << "Task 4" << std::endl;
     test4();
     */
     

    /* //Задача 5
    int n = 10;
    int* arr = new int[n];
    for (int i = 0; i < 3; ++i) {
        std::cout << "Array " << i + 1 << std::endl;
        fillArray(n, arr);
        printArray(n, arr);

        lolSort(n, arr);

        printArray(n, arr);
    }
    delete[] arr;
    */

      /* // Задача 6
      std::cout << "Task 6" << std::endl;
      test6();
      */

      /* // Задача 7
        std::cout << "Task 7" << std::endl;
        test7();
        */

      /* // Задача 8
      int n = 10, m = 5;
      int **matrix = new int*[n];
      fillMatrix(n, m, matrix);

      for (int i = 0; i < n; ++i) {
          std::cout << "Row " << i << ' ';
          sumBetweenZeros(m, matrix[i]);
      }
      std::cout << "\nMatrix:" << std::endl;
      printMatrix(n, m, matrix);

      for (int i = 0; i < n; ++i) delete[] matrix[i];
      delete[] matrix;
     */

      /* //Задача 9
      int n = 15;
      int *arr = new int[n];
      fillArray(n, arr);
      printArray(n, arr);

      lolBubbleSort(n, arr);

      printArray(n, arr);
      delete[] arr;
      */

      /* // Задача 10
      int n = 5, m = 5;
      auto *arr1 = new double[n];
      auto *arr2 = new double[m];
      int max1, max2;
      std::cout << "Input first array:" << std::endl;
      fillArrayTask10(n, arr1, &max1);
      std::cout << "Input second array:" << std::endl;
      fillArrayTask10(m, arr2, &max2);
      std::cout << "Arrays:" << std::endl;
      printArray(n, arr1);
      printArray(n, arr2);

      swap(&arr1[max1], &arr2[max2]);

      std::cout << "After swap of maximums:" << std::endl;
      printArray(n, arr1);
      printArray(n, arr2);

      delete[] arr1;
      delete[] arr2;
      */

      /* //Задача 11
      int n = 5, m = 5;
      int **matrix = new int*[n];
      fillMatrix(n, m, matrix);
      printMatrix(n, m, matrix);

      for (int i = 0; i < n; ++i) {
          shiftRight(m, matrix[i]);
      }

      std::cout << "\nAfter shift:" << std::endl;
      printMatrix(n, m, matrix);

      for (int i = 0; i < n; ++i) delete[] matrix[i];
      delete[] matrix;
      */

      /* // Задача 12
      int n = 5, m = 5;
      int **matrix = new int*[n];
      fillMatrix(n, m, matrix);
      printMatrix(n, m, matrix);

      findMinMax(n, m, matrix);

      for (int i = 0; i < n; ++i) delete[] matrix[i];
      delete[] matrix;
      */

      /* //Задача 13
      const int n = 3, m = 3;
      int nums1[] = {1, 2, 3, 0, 0, 0};
      int nums2[] = {2, 5, 6};

      int i = m - 1;
      int j = n - 1;
      int k = m + n - 1;

      while( i >= 0 && j >= 0 ) {
          if (nums1[i] > nums2[j]) {
              nums1[k] = nums1[i];
              k--; i--;
          } else {
              nums1[k] = nums2[j];
              k--; j--;
          }
      }

      while (j >= 0) {
          nums1[k] = nums2[j];
          k--; j--;
      }

      printArray(n + m, nums1);
       */

       /* //Задача 14
       int n = 6;
       int *prices = new int[n];
       fillArrayKB(n, prices);

       //int n = prices.size();
       int maxProfit = 0, min = 10001;

       for (int i = 0; i < n; ++i) {
           min = std::min(prices[i], min);
           maxProfit = std::max(prices[i] - min, maxProfit);
       }

       std::cout << maxProfit << std::endl;
       */

       /* //Задача 15
       std::vector<std::vector<int>> ans;
       int numRows;
       std::cin >> numRows;

       for (int i = 1; i <= numRows; ++i) {
           std::vector<int> row;
           if (i == 1) {
               row.push_back(1);
               ans.push_back(row);
           } else {
               row.push_back(1);
               for (int j = 0; j < ans[i - 2].size() - 1; ++j) {
                   row.push_back(ans[i - 2][j] + ans[i - 2][j + 1]);
               }
               row.push_back(1);
               ans.push_back(row);
           }
       }

       for (auto & an : ans) {
           for (int j : an) {
               std::cout << j << ' ';
           }
           std::cout << std::endl;
       }
       */

    return 0;
}