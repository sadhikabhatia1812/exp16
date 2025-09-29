AIM:-
To study and implement Exception Handling in C++.

THEORY:-
In programming, exceptions are runtime errors or unexpected situations that disrupt the normal flow of execution. For example, dividing a number by zero, accessing out-of-range indices in arrays, or invalid user inputs can cause exceptions. If not handled, these exceptions can terminate the program abnormally.
Exception Handling in C++ provides a mechanism to detect such runtime errors and handle them gracefully without crashing the program. It ensures that programs are more robust, reliable, and user-friendly.

Key Keywords in C++ Exception Handling
try → The block of code where exceptions may occur.
throw → Used to signal (or raise) an exception when an error is detected.
catch → Handles the exception thrown by throw.
Advantages of Exception Handling
Prevents program crashes due to runtime errors.
Provides clear error messages and debugging support.
Allows separating error-handling code from normal logic.
Helps create more reliable applications.

Example:
If b = 0 in division a / b, normal execution would crash.
Using exception handling, we can throw an error and catch it to display a meaningful message like "Division by Zero not allowed!".

ALGORITHM:-
Program 1: Division by Zero Handling
Input two integers a and b.
Use a try block to perform division.
If b == 0, throw an exception with a message "Division by Zero not allowed!".
Catch the exception and display the error message.
If no exception occurs, display the result.

Program 2: Age Validation Example
Input age from the user.
Use a try block to check if the age is valid for voting.
If age < 18, throw the value of age as an exception.
Catch the exception and display a message that the person is not eligible.
If age ≥ 18, display that the user is eligible to vote.

CONCLUSION:-
Exception handling allows programs to detect and manage runtime errors without abnormal termination.
Using the try-catch-throw mechanism, errors such as division by zero and invalid input (like age < 18) can be handled efficiently.
This ensures that programs are safer, more reliable, and user-friendly.
Thus, the concept of Exception Handling in C++ has been successfully studied and implemented.
