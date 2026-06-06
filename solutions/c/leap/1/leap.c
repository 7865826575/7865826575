#include "leap.h"

// bool leap_year(int year) {
//     // Check if divisible by 4
//     if (year % 4 != 0) {
//         return false;
//     }
//     // If divisible by 4 but not by 100 → leap year
//     if (year % 100 != 0) {
//         return true;
//     }
//     // If divisible by 100, must also be divisible by 400
//     if (year % 400 == 0) {
//         return true;
//     }

//     return false;
// }
bool leap_year(int year){
    return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}