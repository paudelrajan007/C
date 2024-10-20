/* BMI Calculator
Given the height (1.82 meter) and weight (72 kg) of the Chef, calculate his BMI (Body Mass Index).

Formula to calculate the BMI: weight / (height * height)  */
#include <stdio.h>

int main() {
    float height = 1.82;
    float weight = 72;
    float bmi = weight / (height * height);
    printf("%f", bmi);
    return 0;
}