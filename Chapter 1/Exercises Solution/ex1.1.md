When using clang-format command line utility or clang::format::reformat(...) functions from code, one can either use one of the predefined styles (LLVM, Google, Chromium, Mozilla, WebKit, Microsoft) or create a custom style by configuring specific style options.

For LLVM we will address first the high-level style issues like:
    1. Self-contained headers
        - Header files should be self-contained (compile on their own) and end in .h. Non-header files that are meant for inclusion should end in .inc and be used sparingly.
    2. Library Layering
    3. Use #include as little as possible
    4. Keep internal headers private 
    5. Use early exits and continue to simplify code 
    6. Don't use else after a return 

Now for the low-level style issues:
    A. Naming conventions
        1. Type names
            - Should be nouns
            - Start with an upper-case letter
        2. Variable names  
            - Should be nouns
            - Should be camelCase
            - Start with an upper-case letter
        3. Function names
            - Should be verbs 
            - Command-line functions should be imperative
            - Should be camelCase
            - Starts with a lower-case letter
        4. Enum declaration 
            - Should have a Kind suffix like ValueKind
        5. Enumerators
            - Start with an upper-case letter
    B. Use assert to ensure that function requirment is fullfilled 
    C. Do not use *using namespace std* 
    D. Provide a virtual method anchor for classes in headers
    E. Don’t use default labels in fully covered switches over enumerations
    F. Use range-based for loops wherever possible
    G. Don’t evaluate end() every time through a loop
    H. #include <iostream> is Forbidden
    I. Use raw_ostream
    J. Avoid std::endl
    K. Don’t use inline when defining a function in a class definition

