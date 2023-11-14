Printf Project with Philemon Ocloo, Habeeb Quadri

Goal: To construct a function that can format and print output similarly to the C printf function, with the purpose of custom formatting.

Fundamental Elements:
1. Format String Parsing:
Determine the format specifiers (%) together with the width, precision, length, and flags that correspond with them.
To decide how to format the output, take information out of the format specifiers.

2. Printing Results:
'%c', '%s', '%d', '%f', and other format specifiers should be handled with logic.
For output, convert different data types to strings in accordance with the format specifiers.
Take care of the padding, width, and accuracy for formatted output.

3. Taking Care of Variadic Arguments:
To handle variable arguments, use the va_list, va_start, va_arg, and va_end macros.

Taking into account:
1. Error Handling: Gently handle errors, incorrect input, and edge situations.
2. Precision and Width: Use width and precision handling for different kinds of data.
3. Modifiers and Flags: Take care of flags such as width/precision modifiers, zero-padding, and left-justification.
Handling Variable Arguments: Using format specifiers as a guide, get and manage variable arguments correctly.


Challenges:
1. Complexity: Handling several format specifiers and the types that go along with them can be challenging.
2. Standard Compliance: Encouraging adherence to the C standard library's standard printf behavior.

Extra Advice:
Modular Design: To improve code structure, think about dividing the functionality into discrete functions.
Testing: To guarantee accuracy and dependability, thoroughly test the custom printf function using a range of format strings and inputs.
