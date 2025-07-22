/*
1. Function Declaration (aka Prototype)
   What it is: A statement that tells the compiler about a function's name,
   return type, and parameters — but doesn’t include the body (code).

   Purpose: Allows the compiler to know how to call the function before
   its actual definition appears.

   Usually found in header files (.h).

2. Function Implementation (aka Definition)

   What it is: The actual function code — the body where the logic happens.

   Includes the declaration plus the block { ... } that performs the task.

   Usually found in source files (.c).

3. Why separate?
   Declarations in headers let multiple source files know about the function
   without duplicating code.

   Implementations contain the actual logic, kept separate for organization
   and modularity.

4. What happens here:
   main.h tells the compiler what add looks like.

   add.c provides the code for add.

   main.c calls add, relying on the declaration to compile correctly.
*/
