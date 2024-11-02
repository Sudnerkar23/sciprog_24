

# Practical 3: Numerical Integration with Trapezoidal Rule

## Objective

To approximate the integral of the tangent function over a specified range using the Trapezoidal Rule and compare it with the actual value of log(2).

## Steps
* Initialize the start and end points (0 and pi/3) and set the number of divisions.
* Calculate the initial sum using the tangent of the start and end points.
* Use a loop to add terms based on the tangent of angle increments from 5 to 55 degrees.
* Multiply the result by a scaling factor to get the final approximation.
* Compute the absolute and relative differences between this approximation and log(2) for accuracy assessment.

## Compilation
* gcc -o out exercise.c -lm
* ./out

## Output 

before the loop: 1.732051

after the loop: 15.929254

Sum after Multiplying: 0.695045

log(2): 0.693147

Absolute Difference = 0.001898

Relative Difference = 0.002738

