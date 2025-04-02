#include <stdio.h>

// Function to simulate sensor readings
float getSensorTemperature() {
    // This would ideally come from a sensor, here we simulate with a random value
    return 25.0; // Example: Current room temperature in degrees Celsius
}

// Function to adjust temperature
void adjustTemperature(float currentTemp, float preferredTemp) {
    if (currentTemp < preferredTemp) {
        printf("Heating the room to reach %.2f°C...\n", preferredTemp);
    } else if (currentTemp > preferredTemp) {
        printf("Cooling the room to reach %.2f°C...\n", preferredTemp);
    } else {
        printf("Room temperature is already at the preferred level: %.2f°C\n", preferredTemp);
    }
}

int main() {
    float preferredTemp;

    // Ask user for their preferred temperature
    printf("Enter your preferred room temperature (°C): ");
    scanf("%f", &preferredTemp);

    // Get current temperature from sensor
    float currentTemp = getSensorTemperature();

    // Display current temperature
    printf("Current room temperature is %.2f°C\n", currentTemp);

    // Adjust temperature based on preferences
    adjustTemperature(currentTemp, preferredTemp);

    return 0;
}
