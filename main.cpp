#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

bool equal_arrays(int array1[3], int array2[3]) {
    int n = 0;
    for (int k = 0; k < 3; k++) {
        if (array1[k] == array2[k]) {
            n += 1;
        }
    }

    if (n == 3) {
        return true;
    }
    return false;
}

int main() {
    std::ifstream file1{ "left1.txt" };
    std::ifstream file2{ "left2.txt" };
    std::vector<int> array1;
    std::vector<int> array2;

    int num = 0;
    int num2 = 0;

    while(file1 >> num) {
        array1.emplace_back(num);
    }

    while(file2 >> num2) {
        array2.emplace_back(num2);
    }

    int nums1[64][64][3];
    int nums2[64][64][3];

    int ii = 0;
    for (int i = 0; i < 64; i++) {
        for (int j = 0; j < 64; j++) {
            for (int k = 0; k < 3; k++) {
                nums1[i][j][k] = array1[ii];
                ii += 1;
                }
            }
        }

    int iii = 0;
    for (int i = 0; i < 64; i++) {
        for (int j = 0; j < 64; j++) {
            for (int k = 0; k < 3; k++) {
                nums2[i][j][k] = array2[iii];
                iii += 1;
                }
            }
        }

    std::cout << nums1[56][0][0];

    int common_pixels = 0;

    for(int i = 0; i < 64; i++)
    if (equal_arrays(nums1[56][0], nums2[56][i])) {
        common_pixels += 1;
    }

    if (common_pixels > 0) { std::cout << "LEFT\n" << common_pixels;}

}
