#include <stdio.h>

float getSensorTemp(){
    return 30.0;
}
void adjustTemp(float currentTemp, float desiredTemp){

    if(currentTemp > desiredTemp){
        printf("%f The room is very hot", &desiredTemp);
    }

    else if (currentTemp < desiredTemp){
        printf("%f The room is too cool" , &desiredTemp);

    }
    else{
    printf("The room is at desired Temperature" , &desiredTemp);
    }
    
     
}

int main(){

    float desiredTemp; // asking the user for the desired Temp
    printf("Enter the desiredTemp (0C) :"  );

    scanf("%f" , &desiredTemp);

    float currentTemp = getSensorTemp();// calling for sensor Temp

    printf("The curent Temp is %.2f0C \n", currentTemp);

    adjustTemp(currentTemp,desiredTemp);// adjusting temperatures according to preferences

    return 0;



}
   
