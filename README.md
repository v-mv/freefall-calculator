# Free Fall Calculator

This C++ program calculates the distance fallen and final velocity of an object in free fall, given the time of fall.

## Description

The Free Fall Calculator is a simple C++ program that demonstrates basic physics concepts related to objects falling under the influence of gravity. It uses the equations of motion for an object in free fall to calculate:

1. The distance fallen
2. The final velocity

This project is ideal for beginners learning C++ and basic physics concepts.

## Physics Background

Free fall is a special case of motion where an object is subject only to the force of gravity. In this model, we make several simplifying assumptions:

1. The only force acting on the object is gravity.
2. Air resistance is negligible.
3. The acceleration due to gravity (g) is constant and uniform.
4. The object starts from rest (initial velocity = 0 m/s).

On Earth, the acceleration due to gravity is approximately 9.81 m/s². This means that for every second an object is in free fall, its velocity increases by 9.81 m/s.

The program uses the following equations of motion for an object in free fall:

1. Distance fallen: 
   **$d = \frac{1}{2} g t^2$**

This equation is derived from the general equation for displacement under constant acceleration:
**$d = v_0t + \frac{1}{2}at^2$**
where initial velocity **$v_0 = 0$**.

2. Final velocity: **$v = gt$** 

This comes from the equation **$v = v_0 + at$**, where initial velocity **$v_0 = 0$**.
Where:
+ $d$ is the distance fallen (in meters)
+ $v$ is the final velocity (in meters per second)
+ $g$ is the acceleration due to gravity (approximately 9.81 m/s² on Earth)
+ $t$ is the time of fall (in seconds)

It's important to note that these equations are idealized and don't account for factors like:
- Air resistance, which becomes significant for objects falling long distances or at high speeds
- Variations in $g$ due to altitude or local gravitational anomalies
- The curvature of the Earth for very long falls

In real-world scenarios, objects eventually reach a terminal velocity when the air resistance equals the gravitational force, causing the acceleration to become zero.

For small heights and times, however, this model provides a good approximation of an object's motion in free fall.

## Installation

To run this program, you need a C++ compiler installed on your system. If you don't have one, you can install g++ (part of GCC) or Clang.

1. Clone this repository:
   ```
   git clone https://github.com/v-mv/freefall-calculator.git
   ```
2. Navigate to the project directory:
   ```
   cd freefall-calculator
   ```

## Usage

1. Compile the program:
   ```
   g++ code.cpp -o freefall_calculator
   ```
2. Run the program:
   ```
   ./freefall_calculator
   ```
3. When prompted, enter the time of fall in seconds.
4. The program will output the distance fallen and the final velocity.

## Example

```
Enter the time of fall in seconds: 5
Distance fallen: 122.625 meters
Final velocity: 49.05 m/s
```

## Contributing

Contributions, issues, and feature requests are welcome. Feel free to check [issues page](https://github.com/v-mv/freefall-calculator/issues) if you want to contribute.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
