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

int nums1[180][180][3];
int nums2[180][180][3];

int nnn;
void preprocessing_arrays(nnn) {

    std::ifstream file1{ "frame1.txt" };
    std::ifstream file2{ "frame2.txt" };
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

    int ii = 0;
    for (int i = 0; i < nnn; i++) {
        for (int j = 0; j < nnn; j++) {
            for (int k = 0; k < 3; k++) {
                nums1[i][j][k] = array1[ii];
                ii += 1;
                }
            }
        }

    int iii = 0;
    for (int i = 0; i < nnn; i++) {
        for (int j = 0; j < nnn; j++) {
            for (int k = 0; k < 3; k++) {
                nums2[i][j][k] = array2[iii];
                iii += 1;
                }
            }
        }

}


int main() {
    preprocessing_arrays(180);
    bool is_ns = else;

    int common_pixels = 0;
    for (i = 0; i < 50; i++) {
        if(equal_arrays(nums1[0][0], nums2[i][0])) {
            common_pixels += 1;
        }
    }
    if (common_pixels > 40) {
        bool is_ns = true;
    }


    if(is_ns) {
        int common_pixels_up = 0;

        for(int i = 30; i < 60; i++) {
            if (equal_arrays(nums1[60][30], nums2[60][i])) {
                common_pixels_up += 1;
            }
        }
        if (common_pixels_up > 0) { std::cout << "UP\n" << common_pixels_up;}
        else if (common_pixels_up < 0) { std::cout << "DOWN" << common_pixels_up;}

    } else {
        int common_pixels_left = 0;

        for(int i = 5; i < 30; i++) {
            if (equal_arrays(nums1[30][5], nums2[30][i])) {
                common_pixels_left += 1;
            }
        }
        if (common_pixels_left > 0) { std::cout << "LEFT\n" << common_pixels_left;}
        else if (common_pixels_left < 0) { std::cout << "RIGHT\n" << common_pixels_left;}
    }

}
