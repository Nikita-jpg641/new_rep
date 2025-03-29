#include <iostream>

bool equality(double speed_value, double speed_delta, double epsilon)
{
  return (speed_value - speed_delta <= epsilon) || (speed_value + speed_delta >= epsilon); 
}

int main()
{
    double speed_value;
    double speed_initial = .0;
    double speed_delta;
    double epsilon = 0.01;
    char speed_str[7];

    do {
        std::cout << "Speed delta: ";
        std::cin >> speed_delta;
        speed_value = speed_initial + speed_delta;
        speed_initial = speed_value;
        sprintf(speed_str, "%.1f", speed_value); 
        std::cout << "Speed:" << speed_str << std::endl;

        if(speed_value > 150 || speed_value < 0) {
            exit(1);
        }
        
    } while (equality(speed_value, speed_delta, epsilon));     
    
}