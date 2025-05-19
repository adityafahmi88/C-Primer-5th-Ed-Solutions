
# Exercise: Understanding Output with Comments and Quotes in C++

```cpp
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```

---

## Explanation and Output

| Code Snippet                      | Output | Notes                                 |
|---------------------------------|--------|-------------------------------------|
| `std::cout << "/*";`             | `/*`   | Prints literal string                |
| `std::cout << "*/";`             | `*/`   | Prints literal string                |
| `std::cout << /* "*/" */;`       | (none) | Commented out code, invalid syntax  |
| `std::cout << /* "*/" /* "/*" */;` | (none) | Both parts are comments, invalid syntax |

---