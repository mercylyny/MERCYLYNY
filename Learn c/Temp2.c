#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float convertToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

// Simulated sensor reading
float getSensorTemperature() {
    return 25.0; // Current room temperature in degrees Celsius
}

// Check comfort level and suggest action
void checkComfortAndAdjust(float currentTemp, float preferredTemp) {
    float difference = currentTemp - preferredTemp;

    // Check comfort level
    if (difference > 2.0) {
        printf("The room feels too warm. Cooling to %.2f°C...\n", preferredTemp);
    } else if (difference < -2.0) {
        printf("The room feels too cold. Heating to %.2f°C...\n", preferredTemp);
    } else {
        printf("The room is at a comfortable temperature of %.2f°C.\n", currentTemp);
    }
}

int main() {
    float preferredTemp;

    // Ask user for preferred temperature
    printf("Enter your preferred room temperature (°C): ");
    scanf("%f", &preferredTemp);

    // Get current temperature and display it
    float currentTemp = getSensorTemperature();
    printf("Current room temperature is %.2f°C (%.2f°F)\n",
           currentTemp, convertToFahrenheit(currentTemp));

    // Check comfort level and adjust
    checkComfortAndAdjust(currentTemp, preferredTemp);

    return 0;
}
