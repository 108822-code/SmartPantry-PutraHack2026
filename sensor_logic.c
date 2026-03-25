#include <stdio.h>

/* * SmartPantry IoT Firmware Simulation - PutraHack 2026
 * Theme: Pertanian Untuk Rakyat
 * Description: Calculates Soil Health Index (SHI) from NPK Sensors
 */

float calculate_SHI(int n, int p, int k) {
    // Logic: Weighted nutrient balance
    // SHI = (0.4 * N) + (0.3 * P) + (0.3 * K)
    float shi = (0.4 * n) + (0.3 * p) + (0.3 * k);
    return shi;
}

int main() {
    // Simulated sensor data from UPM Plot A
    int nitrogen = 18;
    int phosphorus = 12;
    int potassium = 15;

    float result = calculate_SHI(nitrogen, phosphorus, potassium);

    printf("--- SmartPantry IoT Sensor Node ---\n");
    printf("Reading Data from UPM Farm Plot A...\n");
    printf("Nitrogen: %d mg/kg\n", nitrogen);
    printf("Phosphorus: %d mg/kg\n", phosphorus);
    printf("Potassium: %d mg/kg\n", potassium);
    printf("-----------------------------------\n");
    printf("Calculated Soil Health Index: %.2f\n", result);
    
    if (result > 15.0) {
        printf("Status: OPTIMAL - Ready for Harvest Match.\n");
    } else {
        printf("Status: WARNING - Soil Nutrients Low.\n");
    }

    return 0;
}
