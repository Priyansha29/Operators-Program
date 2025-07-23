# Operators-Program
Aim: To study and implement Operators in C++.

Apparatus: VS Code or Programiz online compiler

Theory: 
1)C++ provides a wide range of operators used to perform operations on variables and data, such as arithmetic, relational, and logical operations.
2)Arithmetic operators (+, -, *, /, %) are used to perform basic mathematical operations like addition, subtraction, multiplication, division, and modulus.
3)Relational operators (>, <, >=, <=, ==, !=) are used to compare two values and return a boolean result (true or false).
4)Logical operators (&&, ||, !) are used to combine multiple relational conditions and return a boolean output.
5)Decision-making statements like if, else if, and else allow a program to take different paths based on certain conditions.
6)The combination of operators and conditional statements enables the program to implement logic and make real-time decisions based on user input.

In this experiment:
a)We check whether a number is positive, negative, or zero using relational and if-else conditions.
b)We calculate the average of marks and assign a grade using arithmetic and relational operators along with nested if-else.
c)We determine the position of a point (x, y) in a 2D plane using logical conditions and decision structures.

These programs help understand how to:
->Accept user input using cin
->Display results using cout
->Use appropriate data types (like int, float)
->Preserve accuracy and structure in logical conditions

Overall, this experiment provides foundational understanding of how logic flows in a C++ program using operators and conditional statements.

-->Program-1: 
1)Takes an integer input from the user.
2)Uses conditional statements (if, else if, else) to check:
->If number > 0 → prints "Number is POSITIVE"
->If number < 0 → prints "Number is NEGATIVE"
->If number == 0 → prints "Number is ZERO"
3)Demonstrates the use of relational and logical operators in decision-making.



-->Program-2: 
1)Takes marks input for 5 subjects: DCLD, NT, EDC, SnS, MTT
2)Calculates average = (sum of all marks) / 5
3)Assigns grades using if-else as per the average:
90–100 → Grade O
80–89 → Grade A+
70–79 → Grade A
60–69 → Grade B
50–59 → Grade C
<50 → FAIL

4)If average is not in 0–100 range, shows error: "Enter valid marks"
5)Demonstrates nested conditions and use of relational operators.

-->Program-3:
1)Takes two inputs: x and y coordinates
2)Uses if-else to determine position:
1st Quadrant: x > 0 & y > 0
2nd Quadrant: x < 0 & y > 0
3rd Quadrant: x < 0 & y < 0
4th Quadrant: x > 0 & y < 0
On X-axis: y = 0, x ≠ 0
On Y-axis: x = 0, y ≠ 0
Origin: x = 0 & y = 0

4)Displays a message indicating the correct position
5)Demonstrates logical AND (&&) and comparison operators.

Conclusion: Hence, we used Logical Operators and Relational Operators in the above 3 codes and executed the decision-making statements to get an accurate output.
