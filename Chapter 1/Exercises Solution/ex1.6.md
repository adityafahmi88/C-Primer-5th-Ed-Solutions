The program is **NOT LEGAL**.

Since we have two undefined variables *v1* and *v2*. Additionally we have not included the standard IO library. Lasty, we have used the output operator without using the standard output function. So here is the corrected code:

```cpp
#include <iostream>

int main() {
    int v1 = 0;
    int v2 = 0;

    std::cout << "The sum of " << v1
            << " and " << v2
            << " is " << v1 + v2 << std::endl;

    return 0;
}
```